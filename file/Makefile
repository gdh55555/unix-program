include ../Make.defines 

target:= ls stdin stdout filehole fileflag

all: $(target)

.PHONY: clean

clean:
	-rm -f $(target) $(TMPFILES) file.hole
