CFLAGS = -Wall -fpic -coverage -lm -std=c99

default: unittestresults.out

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)

unittestresults.out: unittest1.c unittest2.c unittest3.c unittest4.c unittest5.c cardtest1.c cardtest2.c cardtest3.c cardtest4.c randomtestcard1.c randomtestcard2.c randomtestcard3.c dominion.c rngs.c
		
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
		
	echo "cardtest1.c:" >> unittestresults.out
	gcc -o cardtest1 dominion.c rngs.c cardtest1.c $(CFLAGS)
	./cardtest1 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
		
	echo "cardtest2.c:" >> unittestresults.out
	gcc -o cardtest2 dominion.c rngs.c cardtest2.c $(CFLAGS)
	./cardtest2 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
		
	echo "cardtest3.c:" >> unittestresults.out
	gcc -o cardtest3 dominion.c rngs.c cardtest3.c $(CFLAGS)
	./cardtest3 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
		
	echo "cardtest4.c:" >> unittestresults.out
	gcc -o cardtest4 dominion.c rngs.c cardtest4.c $(CFLAGS)
	./cardtest4 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
		
	echo "cardtest5.c:" >> unittestresults.out
	gcc -o cardtest5 dominion.c rngs.c cardtest5.c $(CFLAGS)
	./cardtest5 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	
	echo "Results for running random testing of functions:" >> unittestresults.out	
	echo "randomtestcard1.c:" >> unittestresults.out
	gcc -o randomtestcard1 dominion.c rngs.c randomtestcard1.c $(CFLAGS)
	./randomtestcard1 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	
	echo "randomtestcard2.c:" >> unittestresults.out
	gcc -o randomtestcard2 dominion.c rngs.c randomtestcard2.c $(CFLAGS)
	./randomtestcard2 >> unittestresults.out
	gcov dominion.c -b >> unittestresults.out
	
	echo "randomtestcard3.c:" >> unittestresults.out
	gcc -o randomtestcard3 dominion.c rngs.c randomtestcard3.c $(CFLAGS)
	./randomtestcard3 >> unittestresults.out
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

cardtest1: cardtest1.c dominion.o
	gcc -o cardtest1 dominion.c rngs.c cardtest1.c $(CFLAGS)

cardtest2: cardtest2.c dominion.o
	gcc -o cardtest2 dominion.c rngs.c cardtest2.c $(CFLAGS)

cardtest3: cardtest3.c dominion.o
	gcc -o cardtest3 dominion.c rngs.c cardtest3.c $(CFLAGS)

cardtest4: cardtest4.c dominion.o
	gcc -o cardtest4 dominion.c rngs.c cardtest4.c $(CFLAGS)

cardtest5: cardtest5.c dominion.o
	gcc -o cardtest5 dominion.c rngs.c cardtest5.c $(CFLAGS)

randomtestcard1: randomtestcard1.c dominion.o
	gcc -o randomtestcard1 dominion.c rngs.c randomtestcard1.c $(CFLAGS)

randomtestcard2: randomtestcard2.c dominion.o
	gcc -o randomtestcard2 dominion.c rngs.c randomtestcard2.c $(CFLAGS)

randomtestcard3: randomtestcard3.c dominion.o
	gcc -o randomtestcard3 dominion.c rngs.c randomtestcard3.c $(CFLAGS)

clean: 
	rm unittestresults.out

cleanall:
	rm unittestresults.out randomtestcard1 randomtestcard2 randomtestcard3 unittest1 unittest2 unittest3 unittest4 unittest5 cardtest1 cardtest2 cardtest3 cardtest4 cardtest5 *.gcda *gcno *gcov



