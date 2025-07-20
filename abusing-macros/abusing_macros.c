
#include <stdio.h>
#include <stdlib.h>

#define NUMBER i##n##t
#define BEGIN_PROGRAM(var1, var2) NUMBER m##a##i##n(NUMBER var1, c##h##ar *var2[]) {
#define END_PROGRAM() r##e##t##u##r##n 0; }

#define OUTPUT_CHAR(c) (p##u##tch##a##r((c)))
#define OUTPUT_NEWLINE() (OUTPUT_CHAR(10))
#define OUTPUT_NUM(num) p##r##i##n##t##f("%d", (num))
#define OUTPUT_FIZZ() { \
  OUTPUT_CHAR(70);      \
  OUTPUT_CHAR(73);      \
  OUTPUT_CHAR(90);      \
  OUTPUT_CHAR(90);      \
}

#define OUTPUT_BUZZ() { \
  OUTPUT_CHAR(66);      \
  OUTPUT_CHAR(85);      \
  OUTPUT_CHAR(90);      \
  OUTPUT_CHAR(90);      \
}

#define IS_FIZZ(num) ((num) > 0 && (num) % 3 == 0)
#define IS_BUZZ(num) ((num) > 0 && (num) % 5 == 0)
#define FIZZ_OR_BUZZ(num) (IS_FIZZ((num)) || IS_BUZZ((num)))

#define FIZZBUZZ_CHOICE(num) {           \
  i##f (FIZZ_OR_BUZZ((num))) {           \
    i##f (IS_FIZZ((num))) OUTPUT_FIZZ(); \
    i##f (IS_BUZZ((num))) OUTPUT_BUZZ(); \
  } e##l##s##e {                         \
    OUTPUT_NUM((num));                   \
  }                                      \
  OUTPUT_NEWLINE();                      \
}

#define FIZZBUZZ_LOOP(item, upto) {  \
  w##h##i##l##e ((item) <= (upto)) { \
    FIZZBUZZ_CHOICE((item));         \
    (item)++;                        \
  }                                  \
}


BEGIN_PROGRAM(argc, argv)
	NUMBER from = 1, to = (argc > 1) ? atoi(argv[1]) : 50;
	FIZZBUZZ_LOOP(from, to);
END_PROGRAM()

