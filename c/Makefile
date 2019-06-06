CC = gcc
OBJ = shape.o main.o

shape: $(OBJ)
	$(CC) -o shape $(OBJ)

main.o: main.c
	$(CC) -c main.c

shape.o: shape.c
	$(CC) -c shape.c

.PHONY: clean

clean:
	rm -f $(OBJ) shape
