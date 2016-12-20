#include "ourhdr.h"
#include <dirent.h>

int
main(int argc, char* argv[]){
    DIR *dp;
    struct dirent *dirp;

    if(argc != 2){
        fprintf(stderr, "usage: ls directory_name\n");
        exit(1);
    }

    if((dp = opendir(argv[1])) == NULL){
        fprintf(stderr, "can't open %s\n", argv[1]);
        exit(1);
    }
    while((dirp = readdir(dp)) != NULL)
        fprintf(stdout, "%s ", dirp->d_name);
    fprintf(stdout, "\n");
    closedir(dp);
    exit(0);
}
