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
       		char *argv[]={"mkdir","/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Musyik",NULL};
       			execv("/bin/mkdir",argv);
		}
		else {
			sleep(5);
        	        char *arg2[]={"mkdir","/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Fylm",NULL};
                	execv("/bin/mkdir",arg2);
		}
		}
		else {
                        sleep(5);
                        char *arg2[]={"mkdir","/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Pyoto",NULL};
                        execv("/bin/mkdir",arg2);

   	}
}
else {
                while ((wait(&status)) > 0);
                pid_t pid3 =  fork();
                int status1;
                if(pid3 == 0) {
                        // 3b) extract file
                        char *arg[]={"unzip","-qq","/home/salma/modul2/Musik_for_Stevany.zip","-d","/home/salma/modul2",NULL};
                        execv("/usr/bin/unzip",arg);
                }
                else {
                        char *arg[]={"unzip","-qq","/home/salma/modul2/Film_for_Stevany.zip","-d","/home/salma/modul2",NULL};
                        execv("/usr/bin/unzip",arg);
                }
                else {
                        char *arg[]={"unzip","-qq","/home/salma/modul2/Foto_for_Stevany.zip","-d","/home/salma/modul2/",NULL};
                        execv("/usr/bin/unzip",arg);
                }
}


