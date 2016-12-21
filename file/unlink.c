#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ourhdr.h"

int main(void){
    if(open("foo", O_RDWR) < 0)
        err_sys("open error");

    if(unlink("foo") < 0)
        err_sys("unlink error");

    printf("file unlinked\n");
    sleep(10);
    printf("done\n");

    exit(0);
}
