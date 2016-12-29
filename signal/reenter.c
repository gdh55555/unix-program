#include <pwd.h>
#include <signal.h>
#include "ourhdr.h"

static void my_alarm(int);

int main(void){
    struct passwd *ptr;
    signal(SIGALRM, my_alarm);

    alarm(1);

    for(;;){
        if((ptr = getpwnam("gdh")) == NULL)
            err_sys("getpwna error");
        if(strcmp(ptr->pw_name, "gudh") != 0)
            printf("return value corrupted!, pw_name = %s\n",
                    ptr->pw_name);
    }
}

static void my_alarm(int signo){
    struct passwd *rootptr;

    printf("in signal handler\n");

    if((rootptr = getpwnam("root")) == NULL)
        err_sys("getpwna(root) error");
    alarm(1);
    return;
}
