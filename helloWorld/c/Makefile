all : helloWorld

helloWorld : helloWorld.o
	gcc -o helloWorld helloWorld.o

helloWorld.o : helloWorld.c
	gcc -c helloWorld.c

clean :
	rm helloWorld *.o

run: helloWorld
	./helloWorld
