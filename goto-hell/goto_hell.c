
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char *argv[]) {
	int num = 1;
	int upto = (argc > 1) ? atoi(argv[1]) : 50;
	bool is_fizz, is_buzz;

BEGIN_LOOP:
	if (num > upto) goto END_LOOP;

	is_fizz = ((num % 3) == 0);
	is_buzz = ((num % 5) == 0);

	if (is_fizz && is_buzz) {
		printf("FIZZBUZZ\n");
		goto INCREMENT_COUNTER;
	} else if (is_fizz && !is_buzz) {
		printf("FIZZ\n");
		goto INCREMENT_COUNTER;
	} else if (!is_fizz && is_buzz) {
		printf("BUZZ\n");
		goto INCREMENT_COUNTER;
	} else {
		printf("%d\n", num);
	}

INCREMENT_COUNTER:
	num++;
	goto BEGIN_LOOP;

END_LOOP:
	return 0;
}

