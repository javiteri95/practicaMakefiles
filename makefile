CC=gcc
CFLAGS=-I. -lm
DEPS = point.h
OBJ = main.o point.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

mainPunto: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm mainPunto *.o