CFLAGS = -Wall -fpic -coverage -lm -std=c99

default: unittestresults.out

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)

unittestresults.out: unittest1.c unittest2.c unittest3.c unittest4.c unittest5.c dominion.c rngs.c
	
	echo "Results for running unit testing of functions:" > unittestresults.out	
	echo "unittest1.c:" >> unittestresults.out
	gcc -o unittest1 dominion.c rngs.c unittest1.c $(CFLAGS)
	./unittest1 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	
	echo "unittest2.c:" >> unittestresults.out
	gcc -o unittest2 dominion.c rngs.c unittest2.c $(CFLAGS)
	./unittest2 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
		
	echo "unittest3.c:" >> unittestresults.out
	gcc -o unittest3 dominion.c rngs.c unittest3.c $(CFLAGS)
	./unittest3 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
		
	echo "unittest4.c:" >> unittestresults.out
	gcc -o unittest4 dominion.c rngs.c unittest4.c $(CFLAGS)
	./unittest4 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
		
	echo "unittest5.c:" >> unittestresults.out
	gcc -o unittest5 dominion.c rngs.c unittest5.c $(CFLAGS)
	./unittest5 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out

unittest1: unittest1.c dominion.o
	gcc -o unittest1 dominion.c rngs.c unittest1.c $(CFLAGS)

unittest2: unittest2.c dominion.o
	gcc -o unittest2 dominion.c rngs.c unittest2.c $(CFLAGS)

unittest3: unittest3.c dominion.o
	gcc -o unittest3 dominion.c rngs.c unittest3.c $(CFLAGS)

unittest4: unittest4.c dominion.o
	gcc -o unittest4 dominion.c rngs.c unittest4.c $(CFLAGS)

unittest5: unittest5.c dominion.o
	gcc -o unittest5 dominion.c rngs.c unittest5.c $(CFLAGS)

clean: 
	rm unittestresults.out

cleanall:
	rm unittestresults.out unittest1 unittest2 unittest3 unittest4 unittest5 *.gcda *gcno *gcov



