#include <stdio.h>
#include <dirent.h>
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


//sudo date --set="2021-04-09 16:21:59"
//sudo date --set="2021-04-09 22:21:59"
int main() {


char *links[3] = {
        "https://drive.google.com/uc?id=1FsrAzb9B5ixooGUs0dGiBr-rC7TS9wTD&export=download",
        "https://drive.google.com/uc?id=1ZG8nRBRPquhYXq_sISdsVcXx5VdEgi-J&export=download",
        "https://drive.google.com/uc?id=1ktjGgDkL0nNpY-vT7rT7O6ZI47Ke9xcp&export=download"
    };


char *zipname[3] = {"Foto_for_Stevany.zip","Musik_for_Stevany.zip","Film_for_Stevany.zip"};
char *filename[3] = {"Pyoto","Musyik","Fylm"};

	
while(1){
int x, tanggal, bulan, jam, menit, detik;
  	time_t T= time(NULL);
        struct  tm tm = *localtime(&T);


	time_t times = time(NULL);
    struct tm *timeNow = localtime(&times);
    
    int bDay = 9;
  int bMonth = 4;
  int bHour = 22;
  int bMinute = 22;
    int nDay = timeNow -> tm_mday;
    int nMonth = timeNow -> tm_mon + 1;
    int nHour = timeNow -> tm_hour;
    int nMinute = timeNow -> tm_min;
    int nSecond = timeNow -> tm_sec;	

        // Proses yang akan dijalankan pada tgl 9 April
        // Karena soal a,b,c harus dijalankan 6 jam sebelum ultah stevany maka 22-6 = 16
	
	 if((bDay == nDay) && (bMonth == nMonth) && (bMinute == nMinute) && (0 == nSecond))
	 {
      	 if(bHour - 6 == nHour)
         {
    
         
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
		  
			
			
	int status_2;
	while(wait(&status_2) > 0);
		pid_t pid_2 = fork();
		if(pid_2 < 0) exit(0);
		if(pid_2 == 0) {
			char *arg[] = {"Wget", "--no-check-certificate","https://drive.google.com/uc?id=1ZG8nRBRPquhYXq_sISdsVcXx5VdEgi-J&export=download","-O" ,"Musik_for_Stevany.zip","done", NULL};
			execv("/usr/bin/wget", arg);
		}
		  
			
	int status_3;
	while(wait(&status_3) > 0);
		pid_t pid_3 = fork();
		if(pid_3 < 0) exit(0);
		if(pid_3 == 0) {
			char *arg[] = {"Wget", "--no-check-certificate","https://drive.google.com/uc?id=1FsrAzb9B5ixooGUs0dGiBr-rC7TS9wTD&export=download","-O" ,"Foto_for_Stevany.zip","done", NULL};
			execv("/usr/bin/wget", arg);
		}
		  
		
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
}	  
	
	
	// Saat waktu menunjukkan ulang tahun stevany yaitu jam == 22 maka lakukan proses d, e, f
	//if(tanggal==9 && bulan==4 && jam==22 && menit==22 && detik == 0){
	if(bHour == nHour){   
	
	int status_7;
	while(wait(&status_7) > 0);
		pid_t pid7 = fork();
		if (pid7 < 0) exit(0);
		if (pid7 == 0) {                 
    			DIR *folder1;
    			DIR *folder2;
    			DIR *folder3;
    			struct dirent *entry;
    			int files = 0;
			
			char dir[255] = "/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Pyoto/FOTO/", 
    			dir2[255],
         		dir3[255]="/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Fylm/FILM/",
         		dir4[255]="/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Musyik/MUSIK/";
    			
   			folder1 = opendir("/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Pyoto/FOTO/");
   			folder2 = opendir("/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Fylm/FILM/");
   			folder3 = opendir("/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Musyik/MUSIK/");
                    
    			if(folder1 == NULL) {
        			perror("Unable to read directory");
        			return(1);
    			}
                                
    			while( (entry=readdir(folder1))) {
                        
        		files++;
       	 	printf("File %3d: | Name : %s\n", files, entry->d_name);

		        if (!strcmp (entry->d_name, "."))
         		   continue;
      		 	if (!strcmp (entry->d_name, ".."))    
            		   continue;
            		strcpy(dir2,dir);
        		strcat(dir2,entry->d_name);
        		
        		pid_t pid8 = fork();
        		
        		if (pid8 < 0) exit(EXIT_FAILURE); // Jika gagal membuat proses baru, program akan berhenti

		        if (pid8 == 0 && entry->d_type == 8) {
 		           char *argv[] = {"mv",dir2,"/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Pyoto/", NULL};
 		           execv("/bin/mv", argv);
		        }
        		
        		while( (entry=readdir(folder2))) {
                        
        		files++;
       	 	printf("File %3d: | Name : %s\n", files, entry->d_name);

		        if (!strcmp (entry->d_name, "."))
         		   continue;
      		 	if (!strcmp (entry->d_name, ".."))    
            		   continue;
            		strcpy(dir2,dir3);
        		strcat(dir2,entry->d_name);

        		pid_t pid9;
        		pid9 = fork();
                                    
		        if (pid9 == 0) {
            		    char *argv[] = {"mv",dir2,"/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Fylm/", NULL};
                           execv("/bin/mv", argv);
        		}
	    		}
	    		
	    		while( (entry=readdir(folder3))) {
                        
        		files++;
       	 	printf("File %3d: | Name : %s\n", files, entry->d_name);

		        if (!strcmp (entry->d_name, "."))
         		   continue;
      		 	if (!strcmp (entry->d_name, ".."))    
            		   continue;
            		strcpy(dir2,dir4);
        		strcat(dir2,entry->d_name);

        		pid_t pid10;
        		pid10 = fork();
                                    
		        if (pid10 == 0) {
            		    char *argv[] = {"mv",dir2,"/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Musyik/", NULL};
                           execv("/bin/mv", argv);
        		}
	    		}
		}
		}
		
		char dir[255] = "/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Pyoto/FOTO/", 
         		dir3[255]="/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Fylm/FILM/",
         		dir4[255]="/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Musyik/MUSIK/";
		int status_9;
			while(wait(&status_9) > 0);
			pid_t pid12 = fork();
			if(pid12 < 0) exit(0);
			if(pid12 == 0) {
			char *arg[] = {"rm","-r",dir,dir3,dir4,NULL};
			execv("/usr/bin/rm", arg);
			}
            	
            	sleep(5);
            	// E,F. Semua Folder akan di zip dan folder2nya akan dihapus
        	int status_8;
        	while(wait(&status_8) > 0);
        	pid_t pid11;
        	pid11 = fork();
        	if (pid11 < 0) exit(0);
            	if (pid11 == 0) 
           	{
                // Memasukkan 3 folder kedalam zip dan langsung menghapus foldernya.
               char *argv[] = {"zip", "-r", "-m", "Lopyu_Stevany.zip", "Pyoto", "Musyik", "Fylm", NULL};
               execv("/bin/zip", argv);
            	}
            }

 }

}
}

