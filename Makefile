CC = gcc
OBJ = aTest.o bTest.o

all: aTest

aTest: $(OBJ)
	$(CC) -o $@ $^

$(OBJ): zABCD.h

.PHONY:clean
clean:
	rm -f *.o *.exe
