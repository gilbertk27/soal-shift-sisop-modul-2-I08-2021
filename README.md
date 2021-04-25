# Problem Shift Sisop Module 2 2021

#### Members name:
* Gilbert Kurniawan Hariyanto	05111942000025
* Salma Izzatul Islam	05111942000028
* Hashfi Putraza Hikmat	05111942000021

### NO. 1
#### 1 a. Because she likes the letter Y so much, He wanted the name of the folder as Musyik for mp3, Fylm for mp4, and Pyoto for jpg
  	pid_t pid2 = fork();
	if(pid2 == 0) {
  	char *argv[] = {"mkdir", "-p", filename[0], filename[1], filename[2], NULL};
        execv("/bin/mkdir", argv);
    	}
                       
##### Explanation 1a
1. pid_t pid2 = fork() to create a new process
2. if (pid 2 == 0) if it succeeds in creating a new process the program will create the desired folder using execv ("/ bin / mkdir", argv)
3. char *argv[] = {"mkdir", "-p", filename[0], filename[1], filename[2], NULL}; To create a new folder
#### 1 b. For music, he downloads it from the link below, so are the cases for films and photos.
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
##### Explanation 1b
1. while(wait(&status_1) > 0); waiting for the child process to finish doing its job (create a folder). After that, the program will create a second child process.
2. pid_t pid_1 = fork(); to create a new process
3. if(pid_2 == 0) if it succeeds in creating a new process the program will create the desired folder using execv("/usr/bin/wget", arg);
4. char *arg[] = {"Wget", "--no-check-certificate","https://drive.google.com/uc?id=1FsrAzb9B5ixooGUs0dGiBr-rC7TS9wTD&export=download","-O" ,"Foto_for_Stevany.zip","done", NULL}; to download the zip file at the link and give it the name Foto_for_Stevany.zip
5. while(wait(&status_2) > 0); waiting for the child process to finish doing its job. After that, the program will create a second child process.
6. pid_t pid_2 = fork(); to create a new process
7. if(pid_2 == 0) if it succeeds in creating a new process the program will create the desired folder using execv("/usr/bin/wget", arg);
8. char *arg[] = {"Wget", "--no-check-certificate","https://drive.google.com/uc?id=1ZG8nRBRPquhYXq_sISdsVcXx5VdEgi-J&export=download","-O" ,"Musik_for_Stevany.zip","done", NULL}; to download the zip file at the link and give it the name Musik_for_Stevany.zip
9. while(wait(&status_3) > 0); waiting for the child process to finish doing its job. After that, the program will create a second child process.
10. pid_t pid_3 = fork(); to create a new process 
11. if(pid_3 == 0) if it succeeds in creating a new process the program will create the desired folder using execv("/usr/bin/wget", arg);
12. char *arg[] = {"Wget", "--no-check-certificate","https://drive.google.com/uc?id=1FsrAzb9B5ixooGUs0dGiBr-rC7TS9wTD&export=download","-O" ,"Foto_for_Stevany.zip","done", NULL}; to download the zip file at the link and give it the name Foto_for_Stevany.zip
#### 1 c. he didn’t want the folder to contain the zip files so he extracts the files first after downloading it.
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
##### Explanation 1c
1. while(wait(&status_4) > 0); waiting for the child process to finish doing its job. After that, the program will create a second child process.
2. pid_t pid4 = fork(); to create a new process 
3. if(pid4 < 0) exit(0);
4. if(pid4 == 0) if it succeeds in creating a new process the program will create the desired folder using execv("/usr/bin/unzip", arg);  
5. char *arg[] = {"unzip", "-q", "Musik_for_Stevany.zip","-d","Musyik", NULL}; to extract the Musik_for_Stevany.zip file
6. while(wait(&status_5) > 0); waiting for the child process to finish doing its job. After that, the program will create a second child process.
7. pid_t pid5 = fork(); to create a new process
8. if(pid5 < 0) exit(0);
9. if(pid5 == 0) if it succeeds in creating a new process the program will create the desired folder using execv("/usr/bin/unzip", arg); 
10. char *arg[] = {"unzip", "-q", "Film_for_Stevany.zip","-d","Fylm", NULL}; to extract the Film_for_Stevany.zip file
11. while(wait(&status_6) > 0); waiting for the child process to finish doing its job. After that, the program will create a second child process.
12. pid_t pid6 = fork(); to create a new process
13. if(pid6 < 0) exit(0);
14. if(pid6 == 0) if it succeeds in creating a new process the program will create the desired folder using execv("/usr/bin/unzip", arg); 
15. char *arg[] = {"unzip", "-q", "Foto_for_Stevany.zip","-d","Pyoto",NULL}; to extract the Foto_for_Stevany.zip file
#### 1 d. moving it to the folder that has been made (only the files).
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
		// remove initial folder from the unzip directory	
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

##### Explanation 1d
1. DIR *folder1; holds the DIR type pointer.
2. DIR *folder2; holds the DIR type pointer.
3. DIR *folder3; holds the DIR type pointer.
4. struct dirent *entry; is a pointer to a directory entry.
5. int files = 0 initializes the files variable to count the number of files / folders contained in a folder.
6. folder1 = opendir("/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Pyoto/FOTO/"); to open the foto folder and return a pointer of type DIR.
7. folder2 = opendir("/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Fylm/FILM/"); to open the film folder and return a pointer of type DIR.
8. folder3 = opendir("/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Musyik/MUSIK/"); to open the musik folder and return a pointer of type DIR.
9. char dir[255] = "/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Pyoto/FOTO/", 
    			dir2[255],
   dir3[255]="/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Fylm/FILM/",
   dir4[255]="/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Musyik/MUSIK/"; initialization array dir2 which holds the path of the foto folder, array initialization dir3 to contain the path of the file / directory to be moved from the film folder, and initialization of the array dir4 which holds the path of the musik folder.
10. while ((entry = readdir (folder1))) is used to list all files / directories in the foto folder.
11. while ((entry = readdir (folder2))) is used to list all files / directories in the film folder.
12. while ((entry = readdir (folder3))) is used to list all files / directories in the musik folder.
13. The file type can be found by entry-> d_type where 4 indicates a file and 8 indicates a directory. The name of the file can be found by entry-> d_name.
14. if (!strcmp (entry->d_name, ".")) and if (!strcmp (entry->d_name, "..")) In order for the directory "." and ".." does not include directories that are moved in the foto, film, musik folder
15. strcpy (dir2, dir) To save the path of a file 
16. strcpy (dir2, dir3) To save the path of a file 
17. strcpy (dir2, dir4) To save the path of a file  
18. strcat (dir2, entry-> d_name) which appends the filename / directory to the dir2 array.
19. char *argv[] = {"mv",dir2,"/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Pyoto/", NULL}; to move files into folder pyoto
20. char *argv[] = {"mv",dir2,"/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Fylm/", NULL}; to move files into folder fylm
21. char *argv[] = {"mv",dir2,"/home/xyncz/Documents/GitHub/soal-shift-sisop-modul-2-I08-2021/soal1/Musyik/", NULL}; to move files into musyik
 
#### 1 e. When it’s her birthday, all folder will be zipped with the name Lopyu_Stevany.zip and all the folders will be deleted. (Only the zip remains).
	int status_8;
        	while(wait(&status_8) > 0);
        	pid_t pid11;
        	pid11 = fork();
        	if (pid11 < 0) exit(0);
            	if (pid11 == 0) 
           	{
	char *argv[] = {"zip", "-r", "-m", "Lopyu_Stevany.zip", "Pyoto", "Musyik", "Fylm", NULL};
               execv("/bin/zip", argv);
##### Explanation 1e
1. while(wait(&status_8) > 0); waiting for the child process to finish doing its job. After that, the program will create a second child process.
2. pid11 = fork(); to create a new process
3. if (pid11 < 0) exit(0);
4. if (pid11 == 0) if it succeeds in creating a new process the program will create the desired folder using execv("/usr/bin/zip", arg); 
5. char *argv[] = {"zip", "-r", "-m", "Lopyu_Stevany.zip", "Pyoto", "Musyik", "Fylm", NULL}; to zip all folder and name it Lopyu_Stevany.zip  
#### 1 f. To make his life easier, he wants all of the above to run automatically 6 hours before her birthday (except for point e of course)
	int status_8;
        	while(wait(&status_8) > 0);
        	pid_t pid11;
        	pid11 = fork();
        	if (pid11 < 0) exit(0);
            	if (pid11 == 0) 
           	{
	char *argv[] = {"zip", "-r", "-m", "Lopyu_Stevany.zip", "Pyoto", "Musyik", "Fylm", NULL};
               execv("/bin/zip", argv);
##### Explanation 1f
1. while(wait(&status_8) > 0); waiting for the child process to finish doing its job. After that, the program will create a second child process.
2. pid11 = fork(); to create a new process
3. if (pid11 < 0) exit(0);
4. if (pid11 == 0) if it succeeds in creating a new process the program will create the desired folder using execv("/usr/bin/zip", arg); 
5. char *argv[] = {"zip", "-r", "-m", "Lopyu_Stevany.zip", "Pyoto", "Musyik", "Fylm", NULL}; to zip all folder and name it Lopyu_Stevany.zip  

##### Problem encountered
	• don't know the appropriate function & library to solve the problem
	• placement of the variable that won't be read based on the placement (inside child process or not)

#### Result Image:
| ![](/img/1-1.png) | 
|:--:| 
| *6h before birthday* |

| ![](/img/1-2.png) | 
|:--:| 
| *on birthday* |


### NO. 2
#### 2 a. First, the program needs to extract the given zip into the folder “/home/[user]/modul2/petshop”. Because Loba's boss is careless, the zip may contain unimportant folders, so the program must be able to distinguish between files and folders so that it can process files that should be worked on and delete unnecessary folders.
		pid_t cid;
    cid = fork();
    if(cid < 0) exit(0);
    if(cid == 0) {
        char *arg[] = {"unzip", "-o", "-q", "/home/xyncz/modul2/pets.zip", "-d", "/home/xyncz/modul2/petshop", NULL};
        execv("/usr/bin/unzip", arg);
        int status;
    }
    
    while(wait(&status) > 0);
    DIR *dirp;
    struct dirent *entry;
    dirp = opendir("/home/xyncz/modul2/petshop");
    while((entry = readdir(dirp)) != NULL) {
        if((entry->d_type == DT_DIR) && strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) {
            pid_t cid;
            cid = fork();
            if(cid < 0) exit(0);
            if(cid == 0) {
                char foldername[400];
                sprintf(foldername, "/home/xyncz/modul2/petshop/%s", entry->d_name);
                char *arg[] = {"rm", "-r", foldername, NULL};
                execv("/bin/rm", arg);
            }
        }
        int status2;
    }
##### Explanation 2a
	1. 	pid_t cid;
    cid = fork();
    if(cid < 0) exit(0);
    if(cid == 0) {
    char *arg[] = {"unzip", "-o", "-q", "/home/xyncz/modul2/pets.zip", "-d", "/home/xyncz/modul2/petshop", NULL};
    execv("/usr/bin/unzip", arg); -> In this case we are asked to extract the zip given to the folder "/ home / [user] / modul2 / petshop" using fork and execv.
    
    	2. while(wait(&status) > 0);
    DIR *dirp;
    struct dirent *entry;
    dirp = opendir("/home/xyncz/modul2/petshop");
    while((entry = readdir(dirp)) != NULL) {
        if((entry->d_type == DT_DIR) && strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) {
            pid_t cid;
            cid = fork();
            if(cid < 0) exit(0);
            if(cid == 0) {
                char foldername[400];
                sprintf(foldername, "/home/xyncz/modul2/petshop/%s", entry->d_name);
                char *arg[] = {"rm", "-r", foldername, NULL};
                execv("/bin/rm", arg);
            }
        }
        int status2; ->  Furthermore, with the following program, we can differentiate files and folders so that it can process files that should be worked on and delete unneeded folders. The wait () function is also used to wait for the unzipping process to finish first.
#### 2 b. Pet photos need to be categorized based on the pet's species, so you will need to create a folder for each species that is in the zip file. Since you can't possibly check manually, the program needs to create the required folders according to the contents of the zip file.
		
    while(wait(&status2) > 0);
    DIR *dirp2;
    struct dirent *entry2;
    dirp2 = opendir("/home/xyncz/modul2/petshop");
    char foldername[400][400];
    int idx = 0;
    while((entry2 = readdir(dirp2)) != NULL) {
        if(entry2->d_type == DT_REG) {
            char tmp[400], tmp2[400];
            memset(foldername[idx], 0, sizeof(foldername[idx]));
            memset(tmp2, 0, sizeof(tmp2));
            strcpy(tmp, entry2->d_name);
            
            int i, found = 0;
            for(i = 0; i < strlen(tmp); i++) {
                if(tmp[i] == ';') break;
                tmp2[i] = tmp[i];
            }
            
            for(i = 0; i < idx && found == 0; i++)
                if(strcmp(foldername[i], tmp2) == 0)
                    found = 1;
            
            if(found == 0) {
                strcpy(foldername[idx], tmp2);
                idx++;
            }
        }
    }
  
    int i;
    for(i = 0; i < idx; i++) {
        pid_t cid;
        cid = fork();
        if(cid < 0) exit(0);
        if(cid == 0) {
            char tmp[400];
            sprintf(tmp, "/home/xyncz/modul2/petshop/%s", foldername[i]);
            char *arg[] = {"mkdir", tmp, NULL};
            execv("/bin/mkdir", arg);
        }
    }
##### Explanation 2b
	1. while(wait(&status2) > 0);
    DIR *dirp2;
    struct dirent *entry2;
    dirp2 = opendir("/home/xyncz/modul2/petshop");
    char foldername[400][400];
    int idx = 0;
    while((entry2 = readdir(dirp2)) != NULL) {
        if(entry2->d_type == DT_REG) {
            char tmp[400], tmp2[400];
            memset(foldername[idx], 0, sizeof(foldername[idx]));
            memset(tmp2, 0, sizeof(tmp2));
            strcpy(tmp, entry2->d_name);
            
            int i, found = 0;
            for(i = 0; i < strlen(tmp); i++) {
                if(tmp[i] == ';') break;
                tmp2[i] = tmp[i];
            }
            
            for(i = 0; i < idx && found == 0; i++)
                if(strcmp(foldername[i], tmp2) == 0)
                    found = 1;
            
            if(found == 0) {
                strcpy(foldername[idx], tmp2);
                idx++;
            }
        }
    } -> 	Before creating a pet categorization folder, it is necessary to know the types of pets which will later be used as the name of the folder that will be created. Pet types are stored in a 2-dimensional array of char (such as an array of strings in C ++) with the variable name foldername [] [] and the integer idx to aid indexing of the foldername.
    
    2. int i;
    for(i = 0; i < idx; i++) {
        pid_t cid;
        cid = fork();
        if(cid < 0) exit(0);
        if(cid == 0) {
            char tmp[400];
            sprintf(tmp, "/home/xyncz/modul2/petshop/%s", foldername[i]);
            char *arg[] = {"mkdir", tmp, NULL};
            execv("/bin/mkdir", arg);
        }
    } -> To create folders according to the type of pet.
    
##### Problem encountered
	• don't know the appropriate function & library to solve the problem
	• placement of the variable that won't be read based on the placement (inside child process or not)

#### Result Image:
| ![](/img/2.png) | 
|:--:| 
| *2a & 2b result* |


### NO. 3
#### 3 a. Ranora must create a C program which every 40 seconds creates a directory with a name according to the timestamp [YYYY-mm-dd_HH:ii:ss].
		...
##### Explanation 3a
	...
#### 3 b. Each directory is filled with 10 images downloaded from https://picsum.photos/, where each image will be downloaded every 5 seconds. Each downloaded image will be named with a timestamp format [YYYY-mm-dd_HH:ii:ss] and the image is square with the size (n% 1000) + 50 pixels where n is the Unix Epoch time.
		...
##### Explanation 3b
	...
#### 3 c. After the directory has been filled with 10 images, the program will create a file "status.txt", which contains the message "Download Success" which is encrypted with the Caesar Cipher technique and with shift 5. Caesar Cipher is a simple encryption technique which can perform encryption. string according to the shift / key that we specify. For example, the letter "A" will be encrypted with shift 4 it will become "E". Because Ranora is a perfectionist and neat person, he wants after the file is created, the directory will be zipped and the directory will be deleted, leaving only the zip file.
		...
##### Explanation 3c
	...
#### 3 d. To make it easier to control the program, the Ranora apprentice supervisor wants the program to produce an executable "Killer" program, where the program will terminate all running program processes and will run itself after the program is run. Because Ranora is interested in something new, Ranora has an idea for the "Killer" program that was made, it must be a bash program.
		...
##### Explanation 3d
	...
#### 3 e. The Ranora apprentice supervisor also wants the main program created by Ranora to run in two modes. To activate the first mode, the program must be executed with the -z argument, and when it is executed in the first mode, the main program will immediately execute all its operations when the Killer program is run. Meanwhile, to activate the second mode, the program must be run with the -x argument, and when run in the second mode, the main program will stop allowing the processes in each directory that are still running until it is finished (The directory that has been created will download the image to completion and create a txt file, then zip and delete the directory).

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

##### Explanation 3e
	...
		
##### Problem encountered
	• don't know the appropriate function & library to solve the problem
	• placement of the variable that won't be read based on the placement (inside child process or not)

#### Result Image:
#### Result Image:
| *Result using -x mode (program will be stopped until all process ended* |
|:--:| 
| ![](/img/soal3/3x2.png) | 
| ![](/img/soal3/3x1.png) |

| *Result using -z mode (program will be stopped immediately* |
|:--:| 
| ![](/img/soal3/3-z1.png) | 
| ![](/img/soal3/3-z2.png) | 

