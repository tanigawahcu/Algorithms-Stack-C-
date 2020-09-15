LDLIBS := -lm
CC := /usr/bin/gcc
SRCS = main.c libstack.c
HEADERS = libstack.h
TARGET = stack-sample

$(TARGET):	$(SRCS) $(HEADERS)
	$(CC) $(LDLIBS) $(SRCS) -o $@

clean:	
	$(RM) *.o
	$(RM) $(TARGET)