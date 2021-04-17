#include <sys/types.h> 
#include <sys/wait.h> 
#include <stdlib.h> 
#include <unistd.h>
#include <stddef.h>



int main() {


char *links[3] = {
        "https://drive.google.com/uc?id=1FsrAzb9B5ixooGUs0dGiBr-rC7TS9wTD&export=download",
        "https://drive.google.com/uc?id=1ZG8nRBRPquhYXq_sISdsVcXx5VdEgi-J&export=download",
        "https://drive.google.com/uc?id=1ktjGgDkL0nNpY-vT7rT7O6ZI47Ke9xcp&export=download"
    };

char *zipname[3] = {"Foto_for_Stevany.zip","Musik_for_Stevany.zip","Film_for_Stevany.zip"};
char *filename[3] = {"Pyoto","Musyik","Fylm"};

	pid_t pid1 = fork();
   	int status;
   	if (pid1 == 0) {
		// 1a) membuat direktori 
		pid_t pid2 = fork();
		if(pid2 == 0) {
  		      char *argv[] = {"mkdir", "-p", filename[0], filename[1], filename[2], NULL};
        	      execv("/bin/mkdir", argv);
    		}
		
		}
	else if (pid1 != 0) {
                while ((wait(&status)) > 0);
                pid_t pid3 =  fork();
                int status1;
             
	}
	
	int status_1;
	while(wait(&status_1) > 0);
		pid_t pid_1 = fork();
		if(pid_1 < 0) exit(0);
		if(pid_1 == 0) {
			char *arg[] = {"Wget", "--no-check-certificate","https://drive.google.com/uc?id=1ktjGgDkL0nNpY-vT7rT7O6ZI47Ke9xcp&export=download","-O" ,"Film_for_Stevany.zip","done", NULL};
			execv("/usr/bin/wget", arg);
			
		}
		sleep(2);
			
			
	int status_2;
	while(wait(&status_2) > 0);
		pid_t pid_2 = fork();
		if(pid_2 < 0) exit(0);
		if(pid_2 == 0) {
			char *arg[] = {"Wget", "--no-check-certificate","https://drive.google.com/uc?id=1ZG8nRBRPquhYXq_sISdsVcXx5VdEgi-J&export=download","-O" ,"Musik_for_Stevany.zip","done", NULL};
			execv("/usr/bin/wget", arg);
		}
		sleep(2);
			
	int status_3;
	while(wait(&status_3) > 0);
		pid_t pid_3 = fork();
		if(pid_3 < 0) exit(0);
		if(pid_3 == 0) {
			char *arg[] = {"Wget", "--no-check-certificate","https://drive.google.com/uc?id=1FsrAzb9B5ixooGUs0dGiBr-rC7TS9wTD&export=download","-O" ,"Foto_for_Stevany.zip","done", NULL};
			execv("/usr/bin/wget", arg);
		}
		sleep(2);
		
	int status_4;
	while(wait(&status_4) > 0);
		pid_t pid4 = fork();
		if(pid4 < 0) exit(0);
		if(pid4 == 0) {
			char *arg[] = {"unzip", "-q", "Musik_for_Stevany.zip","-d","Musyik", NULL};
			execv("/usr/bin/unzip", arg);
		}
		
	int status_5;
	while(wait(&status_5) > 0);
		pid_t pid5 = fork();
		if(pid5 < 0) exit(0);
		if(pid5 == 0) {
			char *arg[] = {"unzip", "-q", "Film_for_Stevany.zip","-d","Fylm", NULL};
			execv("/usr/bin/unzip", arg);
		}

	int status_6;
	while(wait(&status_6) > 0);
		pid_t pid6 = fork();
		if(pid6 < 0) exit(0);
		if(pid6 == 0) {
			char *arg[] = {"unzip", "-q", "Foto_for_Stevany.zip","-d","Pyoto",NULL};
			execv("/usr/bin/unzip", arg);
		}
		
	/* tried to move not working
	
	int status_7;
	while(wait(&status_7) > 0);
		pid_t pid7 = fork();
		if(pid7 < 0) exit(0);
		if(pid7 == 0) {
			char *arg[] = {"mv",  "-v", "/Pyoto/FOTO/*", "/Pyoto/",NULL};
			execv("/usr/bin/mv", arg);
		}
*/
}
