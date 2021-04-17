# Problem Shift Sisop Module 2 2021

#### Members name:
* Gilbert Kurniawan Hariyanto	05111942000025
* Salma Izzatul Islam	05111942000028
* Hashfi Putraza Hikmat	05111942000021

### NO. 1
#### 1 a. Because she likes the letter Y so much, He wanted the name of the folder as Musyik for mp3, Fylm for mp4, and Pyoto for jpg
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
	1. pid_t pid2 = fork() to create a new process
	2. if (pid 2 == 0) if it succeeds in creating a new process the program will create the desired folder using execv ("/ bin / mkdir", argv)
	3. sleep(5) The program first pauses for five seconds and creates a new folder
#### 1 b. For music, he downloads it from the link below, so are the cases for films and photos.
		...
##### Explanation 1b
	...
#### 1 c. he didn’t want the folder to contain the zip files so he extracts the files first after downloading it.
#### 1 d. moving it to the folder that has been made (only the files).
#### 1 e. When it’s her birthday, all folder will be zipped with the name Lopyu_Stevany.zip and all the folders will be deleted. (Only the zip remains).
#### 1 f. To make his life easier, he wants all of the above to run automatically 6 hours before her birthday (except for point e of course)
### NO. 2
#### 2 a. First, the program needs to extract the given zip into the folder “/home/[user]/modul2/petshop”. Because Loba's boss is careless, the zip may contain unimportant folders, so the program must be able to distinguish between files and folders so that it can process files that should be worked on and delete unnecessary folders.
#### 2 b. Pet photos need to be categorized based on the pet's species, so you will need to create a folder for each species that is in the zip file. Since you can't possibly check manually, the program needs to create the required folders according to the contents of the zip file.
#### 2 c. After the folders are created, your program should move the photos to the folder based on their respective species and rename the photo with the pet's name.
#### 2 d. Because 1 photo may have more than 1 pet in it, photos must be moved to each corresponding category.
#### 2 e. In each folder, create a file "keterangan.txt" that contains names and ages of all the pets in the folder. Format of "keterangan.txt" must be identical with the 
### NO. 3
#### 3 a. Ranora must create a C program which every 40 seconds creates a directory with a name according to the timestamp [YYYY-mm-dd_HH:ii:ss].
#### 3 b. Each directory is filled with 10 images downloaded from https://picsum.photos/, where each image will be downloaded every 5 seconds. Each downloaded image will be named with a timestamp format [YYYY-mm-dd_HH:ii:ss] and the image is square with the size (n% 1000) + 50 pixels where n is the Unix Epoch time.
#### 3 c. After the directory has been filled with 10 images, the program will create a file "status.txt", which contains the message "Download Success" which is encrypted with the Caesar Cipher technique and with shift 5. Caesar Cipher is a simple encryption technique which can perform encryption. string according to the shift / key that we specify. For example, the letter "A" will be encrypted with shift 4 it will become "E". Because Ranora is a perfectionist and neat person, he wants after the file is created, the directory will be zipped and the directory will be deleted, leaving only the zip file.
#### 3 d. To make it easier to control the program, the Ranora apprentice supervisor wants the program to produce an executable "Killer" program, where the program will terminate all running program processes and will run itself after the program is run. Because Ranora is interested in something new, Ranora has an idea for the "Killer" program that was made, it must be a bash program.
#### 3 e. The Ranora apprentice supervisor also wants the main program created by Ranora to run in two modes. To activate the first mode, the program must be executed with the -z argument, and when it is executed in the first mode, the main program will immediately execute all its operations when the Killer program is run. Meanwhile, to activate the second mode, the program must be run with the -x argument, and when run in the second mode, the main program will stop allowing the processes in each directory that are still running until it is finished (The directory that has been created will download the image to completion and create a txt file, then zip and delete the directory).
