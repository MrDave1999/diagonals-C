CC = gcc
INCLUDE = -I./include
CFLAGS =  $(INCLUDE) -g -c -Wall -Wextra
OBJS_FILES = diagonal_left.o diagonal_right.o curves.o array.o main.o 
OBJS = $(patsubst %.o,obj/%.o,$(OBJS_FILES))

vpath %.c source

all: comp
	$(CC) obj/*.o -o diagonals

comp: $(OBJS)

obj/%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

obj/diagonal_left.o:	diagonal_left.c
obj/diagonal_right.o: 	diagonal_right.c
obj/curves.o: 			curves.c
obj/array.o: 			array.c
obj/main.o: 			main.c

clean:
	rm -rf diagonals obj/*.o