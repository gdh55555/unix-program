include ../Make.defines

#
# Makefile for misc library.
#

AR	= ar
LIBMISC	= ../libmisc.a
COMM_OBJ   = bufargs.o clrfl.o \
			 daemoninit.o error.o errorlog.o lockreg.o locktest.o \
			 openmax.o pathalloc.o popen.o prexit.o prmask.o \
			 ptyfork.o ptyopen.o readn.o recvfd.o \
			 senderr.o sendfd.o  \
			 setfl.o signal.o signalintr.o \
			 sleep.o sleepus.o spipe.o strerror.o \
			 tellwait.o ttymodes.o writen.o
NOANSI_OBJ =
BSD_OBJ	   =
S5_OBJ	   = semaph.o
RANLIB     = ranlib

#get option
all:
	make svr4

${COMM_OBJ}:
${S5_OBJ}:

lib:	${OBJS}
	${AR} rv ${LIBMISC} $?
	${RANLIB} ${LIBMISC}

#can share define, so don't need repeat defenition
sun:
	make "CFLAGS = $(CFLAGS) -O" \
		"OBJS = $(COMM_OBJ) $(BSD_OBJ) $(S5_OBJ)" "RANLIB = ranlib" lib
	make "CFLAGS = $(NOANSICFLAGS) -O" \
		"OBJS = $(NOANSI_OBJ)" "RANLIB = ranlib" lib

svr4:
	make "CFLAGS = -O" \
		"OBJS = $(COMM_OBJ) $(S5_OBJ)" "RANLIB = ls -l" lib

clean:
	rm -f *.o a.out core temp.* $(LIBMISC)
