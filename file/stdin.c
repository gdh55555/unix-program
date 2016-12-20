#include "ourhdr.h"

#define BUFFSIZE 4096

int main(void){
    int n;
    char buf[BUFFSIZE];

    while((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
        if(write(STDOUT_FILENO, buf, n) != n){
            err_exit("write error!\n");
        }

    if(n < 0)
        err_exit("read error!\n");
    exit(0);
}
