CC = gcc
OBJ = a2Test.o b2Test.o

all: a2Test

a2Test: $(OBJ)
	$(CC) -o $@ $^

$(OBJ): z2ABCD.h

.PHONY:clean
clean:
	rm -f *.o *.exe
