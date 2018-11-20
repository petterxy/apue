# #! /bin/bash
# gcc fig17.18.c fig17.25.c error.c fig17.10.c recvfd_ubuntu.c  -o 17.6V2_ubuntu_client
# object=fig17.18.o fig17.25.o error.o fig17.10.o recvfd.o
# object= *.o
# objects=$(wildcard *.o)
objects := $(patsubst %.c,%.o,$(wildcard *.c))

edit:$(objects)
	cc -o edit $(objects)

# fig17.18.o: apue.h open.h
#	cc -c fig17.18.c apue.h open.h

 # fig17.25.o:fig17.25.c apue.h
#	cc -c fig17.25.c apue.h

 # fig17.10.o:fig17.10.c apue.h
#	cc -c fig17.10.c apue.h

# error.o:error.c apue.h
#	cc -c error.c apue.h

# recvfd.o:recvfd.c apue.h
#	cc -c recvfd.c apue.h

$(object):apue.h open.h

.PHONY:clean
clean:
	rm *.o
	rm edit

print: *.c
	lpr -p $?
	touch print
