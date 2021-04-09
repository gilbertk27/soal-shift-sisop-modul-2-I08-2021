#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<errno.h>
#include<unistd.h>
#include<syslog.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<wait.h>
#include<dirent.h>

int main() {
    int status, status2, status3, status4;

    //soal a
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
    
    //soal b
    
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
}
