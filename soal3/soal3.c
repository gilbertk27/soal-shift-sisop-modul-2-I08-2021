#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <wait.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/prctl.h>

void killfile(char mode[])
{
FILE *kill_file;
kill_file = fopen("killer.sh", "w");
fprintf(kill_file,"rm $0\n");
if(strcmp(mode, "-z")==0) 
	fprintf(kill_file, "#!/bin/bash\nkill -9 -%d", getpid());
else if(strcmp(mode, "-x")==0) 
	fprintf(kill_file, "#!/bin/bash\nkill %d", getpid());
    
int status;
pid_t child_id;
child_id = fork();
if(child_id==0)
{ 
        char *argv[] = {"chmod", "u+x", "killer.sh", NULL};
        execv("/bin/chmod", argv);
}

fclose(kill_file);
}

int main(int argc, char *argv[]) 
{
	
    pid_t pid, sid;        // Variabel untuk menyimpan PID

    pid = fork();     // Menyimpan PID dari Child Process

    /* Keluar saat fork gagal
    * (nilai variabel pid < 0) */
    if (pid < 0) {
    exit(EXIT_FAILURE);
    }

    /* Keluar saat fork berhasil
    * (nilai variabel pid adalah PID dari child process) */
    if (pid > 0) {
    exit(EXIT_SUCCESS);
    }

    umask(0);

    sid = setsid();
    if (sid < 0) {
    exit(EXIT_FAILURE);
    }


    close(STDIN_FILENO);
    close(STDOUT_FILENO);
    close(STDERR_FILENO);
  
  killfile(argv[1]);
  
time_t t1;
struct tm* tm_t1;
  
while(1)
{
t1 = time(NULL);
tm_t1 = localtime(&t1);
char name_folder[100];
strftime(name_folder, 100, "%Y-%m-%d_%H:%M:%S", tm_t1);

pid_t child;
child = fork();

int status;

	if (child < 0) 
      	exit(EXIT_FAILURE);

    	if (child == 0)
    	{ 
      		if (fork() == 0)
      		{
        		char *argv[] = {"mkdir", "-p", name_folder, NULL};
        		execv("/bin/mkdir", argv);
      		}
         	else 
      		{
        		while ((wait(&status)) > 0);
        		for (int i = 0; i < 10; i++)
        		{
          			if (fork() == 0)
          			{
            				chdir(name_folder);
            				time_t t2;
            				struct tm* tm_t2;
        
            				t2 = time(NULL);
            				tm_t2 = localtime(&t2);
        

            			
            				int t = (int)time(NULL);
            				t = (t % 1000) + 100;

            
            				char picfile[100];
            				sprintf(picfile, "https://picsum.photos/%d", t);
            				char filename[100];
           	  			strftime(filename, 100, "%Y-%m-%d_%H:%M:%S", tm_t2);
            				char *argv[] = {"wget", picfile, "-qO", filename, NULL};
            				execv("/usr/bin/wget", argv);
          	  			}
          	  		sleep(5);
              			}
        	    
        	    
        	    	char msg[80] = "Download Success", status_file[160], temp;
    			for (int i = 0; i < strlen(msg); i++) {
    			/*for caessar cipher */
    			if (msg[i] >= 'A' && msg[i]<='Z') {
        			char newletter = msg[i] - 'A' + 26;
        			newletter += 5;
        			newletter = newletter % 26;
        			msg[i] = newletter + 'A';
    			} else if (msg[i] >= 'a' && msg[i]<='z') {
        			char newletter = msg[i] - 'a' + 26;
        			newletter += 5;
        			newletter = newletter % 26;
			msg[i] = newletter + 'a';
	    		}
  			}
 			sprintf(status_file, "%s/%s", name_folder, "status.txt");
 			FILE *txt = fopen(status_file, "w");
 			fputs(msg, txt);
 			fclose(txt);
 
			char name_folder_zip[150];
        		sprintf(name_folder_zip, "%s.zip", name_folder);
        		char *argv[] = {"zip", "-qrm", name_folder_zip, name_folder, NULL};
        		execv("/usr/bin/zip", argv);
      		  }
    	}
    	else
      	sleep(40);
  	}
}	


