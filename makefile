# def de variables
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
OBJ = main.o double_list.o
EXEC = programa

# compila el programa
all: $(EXEC)

# generar el archivo ejecutable
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

# compilar main.c
main.o: main.c double_list.h
	$(CC) $(CFLAGS) -c main.c

# compilar double_list.c
lista_doble.o: double_list.c double_list.h
	$(CC) $(CFLAGS) -c double_list.c

# limpiar los archivos generados
clean:
	rm -f $(OBJ) $(EXEC)

# revisar memory leaks
valgrind: $(EXEC)
	valgrind --leak-check=full ./$(EXEC)
	

.PHONY: all clean