pythagoras: pythagoras.o linkedList.o spec.o
	gcc -o pythagoras pythagoras.o linkedList.o spec.o

testP.o: pythagoras.c
	gcc -c pythagoras.c

spec.o: spec.c
	gcc -c spec.c

linkedList.o: linkedList.c
	gcc -c linkedList.c

.PHONY: clean
clean:
	rm *.o pythagoras
