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
	3.
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
	...
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
	...
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

##### Explanation 1d
	...
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
	...
#### 1 f. To make his life easier, he wants all of the above to run automatically 6 hours before her birthday (except for point e of course)
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
    
	if((bDay == nDay) && (bMonth == nMonth) && (bMinute == nMinute) && (0 == nSecond))
	 {
      	 if(bHour - 6 == nHour)
         {
##### Explanation 1f
	...
### NO. 2
#### 2 a. First, the program needs to extract the given zip into the folder “/home/[user]/modul2/petshop”. Because Loba's boss is careless, the zip may contain unimportant folders, so the program must be able to distinguish between files and folders so that it can process files that should be worked on and delete unnecessary folders.
		...
##### Explanation 2a
	...
#### 2 b. Pet photos need to be categorized based on the pet's species, so you will need to create a folder for each species that is in the zip file. Since you can't possibly check manually, the program needs to create the required folders according to the contents of the zip file.
		...
##### Explanation 2b
	...
#### 2 c. After the folders are created, your program should move the photos to the folder based on their respective species and rename the photo with the pet's name.
		...
##### Explanation 2c
	...
#### 2 d. Because 1 photo may have more than 1 pet in it, photos must be moved to each corresponding category.
		...
##### Explanation 2d
	...
#### 2 e. In each folder, create a file "keterangan.txt" that contains names and ages of all the pets in the folder. Format of "keterangan.txt" must be identical with the 
		...
##### Explanation 2e
	...
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
		...
##### Explanation 3e
	...
