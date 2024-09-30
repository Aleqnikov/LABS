CC = gcc
OBJ = menu.o max.o min.o diff.o sum.o
EXEC = menu

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC)  -o $(EXEC) $(OBJ)

menu.o: menu.c max.h min.h diff.h sum.h
	$(CC)  -c menu.c

max.o: max.c max.h
	$(CC)  -c max.c

min.o: min.c min.h
	$(CC)  -c min.c

diff.o: diff.c diff.h max.h min.h
	$(CC)  -c diff.c

sum.o: sum.c sum.h min.h
	$(CC) -c sum.c

clean:
	rm -f $(OBJ) $(EXEC)