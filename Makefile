CC = gcc
CFLAGS = -Wall -g -std=c99 -fsanitize=address,undefined
OBJS = mysh.o

all: mysh

mysh: $(OBJS)
	$(CC) $(CFLAGS) -o $@  $^	
mysh.o: mysh.c
	$(CC) $(CFLAGS) -c $^
clean:
	rm -rf *.o mysh
