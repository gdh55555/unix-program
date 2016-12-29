#include <setjmp.h>
#include <signal.h>
#include <unistd.h>

static jmp_buf env_alarm;

static void
sig_alrm(int signo){
    longjmp(env_alarm, 1);
}

unsigned int sleep2(unsigned int nsecs){
    if(signal(SIGALRM, sig_alrm) == SIG_ERR)
        return (nsecs);
    if(setjmp(env_alarm) == 0){
        alarm(nsecs);
        pause();
    }
    return (alarm(0));
}
