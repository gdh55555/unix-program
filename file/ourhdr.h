#ifndef __ourhdr_h
#define __ourhdr_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

#define MAXLINE 4096
#define FILE_MODE   (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

#define DIR_MODE    (FILE_MODE | S_IXUSR | S_IXGRP | S_IXOTH)

#define min(a,b)    ((a) < (b) ? (a) : (b))
#define max(a,b)    ((a) > (b) ? (a) : (b))

#define err_exit(str) fprintf(stderr, str)
void err_dump(const char*, ...);
void err_sys(const char*, ...);
void err_msg(const char*, ...);
void err_sys(const char*, ...);
void err_quit(const char*, ...);

void log_msg(const char*, ...);
void log_open(const char*, ...);
void log_quit(const char*, ...);
void log_ret(const char*, ...);
void log_sys(const char*, ...);

#endif
