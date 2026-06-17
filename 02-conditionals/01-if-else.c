#include <stdio.h>

/*
 * Lesson 01: conditional statements
 *
 * Comparison operators:  ==  !=  <  >  <=  >=
 * Logical operators:     && (and)  || (or)  ! (not)
 *
 * Watch out: `=` assigns, `==` compares. Writing `if (x = 5)` compiles
 * but assigns 5 to x and is always true -- a classic beginner bug.
 */

int main(void) {
    int howls;

    printf("How many times did the wolves howl tonight: ");
    if (scanf("%d", &howls) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    /* Simple if: the block runs only when the condition is true. */
    if (howls < 0) {
        printf("A negative number of howls? Suspicious input.\n");
        return 1;
    }

    /* if / else if / else: exactly one branch runs, checked top to bottom. */
    if (howls == 0) {
        printf("A silent night. The pack is resting.\n");
    } else if (howls <= 5) {
        printf("A calm night with just a few howls.\n");
    } else if (howls <= 20) {
        printf("The pack is active tonight.\n");
    } else {
        printf("A full moon frenzy!\n");
    }

    /* Logical operators combine conditions. */
    if (howls > 0 && howls % 2 == 0) {
        printf("The howl count is even -- the wolves sang in pairs.\n");
    }

    if (howls == 0 || howls > 20) {
        printf("An unusual night, worth noting in the journal.\n");
    }

    return 0;
}
