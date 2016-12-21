include ../Make.defines 

target:= ls stdin stdout filehole fileflag filetype umask changemod unlink longpath ftw4

all: $(target)

.PHONY: clean

clean:
	-rm -f $(target) $(TMPFILES) file.hole foo bar
