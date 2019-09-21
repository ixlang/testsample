.SUFFIXES:.c .o

CC=gcc

SRCS=testxnl.cpp

OBJS=$(SRCS:.c=.o)

EXEC=testxnl.so

start: $(OBJS)
	$(CC) -shared -o $(EXEC) $(OBJS) -fPIC

.c.o:
	$(CC) -fPIC -Wall -o $@ -c $<

clean:
	rm -rf $(EXEC) $(OBJS)
