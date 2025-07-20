
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	static int number = 1;
	int upto = (argc > 1) ? atoi(argv[1]) : 50;

	int is_fizz = (number % 3 == 0);
	int is_buzz = (number % 5 == 0);

	if (is_fizz && is_buzz) {
		puts("FIZZBUZZ");
	} else if (is_fizz && !is_buzz) {
		puts("FIZZ");
	} else if (!is_fizz && is_buzz) {
		puts("BUZZ");
	} else {
		printf("%d\n", number);
	}

	if (number < upto) {
		number++;
		return main(argc, argv);
	}

	return 0;
}

