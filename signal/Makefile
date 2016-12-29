include ../Make.defines

target = sigusr reenter child tsleep2 read1 read2 critical suspend1 suspend2 system abort
all: $(target)

tsleep2: sleep2.o tsleep2.o
	$(LINK.c) -o $@ sleep2.o tsleep2.o $(LDLIBS)
clean:
	-rm -f $(target) $(TEMPFILES)
