
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

	if (is_fizz && is_buzz) goto FIZZBUZZ;
	else if (is_fizz && !is_buzz) goto FIZZ;
	else if (!is_fizz && is_buzz) goto BUZZ;
	else goto NUMBER;

FIZZBUZZ:
	printf("FIZZBUZZ\n");
	goto INCREASE_LOOP;

FIZZ:
	printf("FIZZ\n");
	goto INCREASE_LOOP;

BUZZ:
	printf("BUZZ\n");
	goto INCREASE_LOOP;

NUMBER:
	printf("%d\n", num);

INCREASE_LOOP:
	num++;
	goto BEGIN_LOOP;

END_LOOP:
	return 0;
}

