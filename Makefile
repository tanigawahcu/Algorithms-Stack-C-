LDLIBS := -lm
CC := /usr/bin/gcc

stack-sample:	main.o libstack.o

main.o libstack.o:	libstack.h

clean:	
	$(RM) *.o
	$(RM) stack-sample