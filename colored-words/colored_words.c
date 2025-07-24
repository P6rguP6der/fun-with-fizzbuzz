
#include <stdio.h>
#include <stdlib.h>

typedef enum {FALSE, TRUE} BOOLEAN;

#define COLOR_BLUE   "\033[94m"
#define COLOR_YELLOW "\033[93m"
#define COLOR_GREEN  "\033[92m"
#define RESET_COLOR  "\033[0m"

#define PRINT_COLORED_MSG(color, msg) {       \
  printf(COLOR_##color msg RESET_COLOR "\n"); \
}

#define OUTPUT_FIZZBUZZ() PRINT_COLORED_MSG(GREEN, "FIZZBUZZ")
#define OUTPUT_FIZZ() PRINT_COLORED_MSG(BLUE, "FIZZ")
#define OUTPUT_BUZZ() PRINT_COLORED_MSG(YELLOW, "BUZZ")


int main(int argc, char *argv[]) {
	int number = 1;
	int upto = (argc > 1) ? atoi(argv[1]) : 50;

	for (; number <= upto; number++) {
		BOOLEAN is_fizz = (number % 3 == 0);
		BOOLEAN is_buzz = (number % 5 == 0);

		if (is_fizz && is_buzz) {
			OUTPUT_FIZZBUZZ();
		} else if (is_fizz && !is_buzz) {
			OUTPUT_FIZZ();
		} else if (!is_fizz && is_buzz) {
			OUTPUT_BUZZ();
		} else {
			printf("%d\n", number);
		}
	}

	return 0;
}

