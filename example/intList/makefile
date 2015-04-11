intList: intList.o linkedList.o spec.o
	gcc -o intList intList.o linkedList.o spec.o

testP.o: intList.c
	gcc -c intList.c

spec.o: spec.c
	gcc -c spec.c

linkedList.o: linkedList.c
	gcc -c linkedList.c

.PHONY: clean
clean:
	rm *.o intList
