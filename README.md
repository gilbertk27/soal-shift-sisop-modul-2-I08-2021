# Problem Shift Sisop Module 2 2021

#### Members name:
* Gilbert Kurniawan Hariyanto	05111942000025
* Salma Izzatul Islam	05111942000028
* Hashfi Putraza Hikmat	05111942000021

### NO. 1
#### 1 a. create folders named Musyik, Fylm, and Pyoto
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
                       
##### Explanation 1a
