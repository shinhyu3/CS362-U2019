default: testme

testme: 
	gcc -o testme testme.c -Wall -coverage -fpic -lm -std=c99

	echo "Result for running random test:"
	./testme

clean:
	rm testme

cleanall:
	rm testme *.gcda *.gcno *.gcov
