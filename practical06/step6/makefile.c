CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

multx: main.o multmatx.o
	$(CC) -o $@ $^ $(LDFLAGS)
##$(CC) -o multx main.o multmatx.c

multmatx.o: multmatx.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) multmatx.c

main.o: main.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) main.c

clean:
	rm *.o
