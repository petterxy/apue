# sample Makefile
EXEF = foo
CFLAGS += -Wall –g

.PHONY : all debug test

all : $(EXEF)
foo : foo.c

$(EXEF) : debug.h
	$(CC) $(CFLAGS) $(addsuffix .c,$@) –o $@

# debug : @ e c h o ” C F L A G S = $ ( C F L A G S ) ”
debug :
	@echo “CFLAGS=$(CFLAGS)”
