// In grade.c
#include <stdio.h>

int main(void) {
    int grade = 82 /* arbitrary initialiaztion of grade */;
    char letter = 'f';    /* by default... */

    if (grade > 90) {
        letter = 'a';
    }   
    else if (grade > 80) {
            letter = 'b';
    }
    else  if (grade > 70) {
                  letter = 'c';
    }

    else  if (grade > 60) {
                      letter = 'd';
    }
                        printf("%c\n", letter);
                                      return 0;
}

// The code  snippet doesn't have a value for a grade. If I type the integer 82, the grade that is returned is a d instead of a b.


