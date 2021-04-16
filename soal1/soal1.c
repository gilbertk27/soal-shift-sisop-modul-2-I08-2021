#include <sys/types.h> 
#include <sys/wait.h> 
#include <stdlib.h> 
#include <unistd.h>
#include <stddef.h>

int main() {
	pid_t pid1 = fork();
   	int status;
   	if (pid1 == 0) {
		// 1a) membuat direktori 
		pid_t pid2 = fork();
		if(pid2 == 0) {
       			char *argv[]={"mkdir","/Home/salma/modul2/Musyik",NULL};
       			execv("/bin/mkdir",argv);
		}
		else {
			sleep(5);
        	        char *arg2[]={"mkdir","/Home/salma/modul2/Fylm",NULL};
                	execv("/bin/mkdir",arg2);
		}
		}
		else {
                        sleep(5);
                        char *arg2[]={"mkdir","/Home/salma/modul2/Pyoto",NULL};
                        execv("/bin/mkdir",arg2);

   	}
}

