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
		
	int status4;
	while(wait(&status4) > 0);
		pid_t pid4 = fork();
		if(pid4 < 0) exit(0);
		if(pid4 == 0) {
			char *arg[] = {"unzip", "-o", "-q", "Musik_for_Stevany.zip","-d","Musyik", NULL};
			execv("/usr/bin/unzip", arg);
		}
		
	int status5;
	while(wait(&status5) > 0);
		pid_t pid5 = fork();
		if(pid5 < 0) exit(0);
		if(pid5 == 0) {
			char *arg[] = {"unzip", "-o", "-q", "Film_for_Stevany.zip","-d","Fylm", NULL};
			execv("/usr/bin/unzip", arg);
		}

	int status6;
	while(wait(&status6) > 0);
		pid_t pid6 = fork();
		if(pid6 < 0) exit(0);
		if(pid6 == 0) {
			char *arg[] = {"unzip", "-o", "-q", "Foto_for_Stevany.zip","-d","Pyoto",NULL};
			execv("/usr/bin/unzip", arg);
		}


}
