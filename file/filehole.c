#include "ourhdr.h"
#include <fcntl.h>

char buf1[] = "ABCDEFGHIJ";
char buf2[] = "abcdefghij";

int main(void){
    int fd;
    if((fd = creat("file.hole", FILE_MODE)) < 0)
        err_exit("creat error!\n");
    if(write(fd, buf1, 10) != 10)
        err_exit("buf1 write error!\n");

    if(lseek(fd, 16384, SEEK_SET) == -1)
        err_exit("lseek error!\n");

    if(write(fd, buf2, 10) != 10)
        err_exit("buf2 write error!\n");

    exit(10);
}
