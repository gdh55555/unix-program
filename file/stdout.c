#include "ourhdr.h"

int main(void){
    int c;
    while((c = getc(stdin)) != EOF)
        if(putc(c, stdout) == EOF)
            err_exit("output error\n");

    if(ferror(stdin))
        err_exit("input error!\n");
    exit(0);
}
