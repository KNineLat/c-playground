#include <stdio.h>

/*
 * Lesson 01: the while loop
 *
 * A while loop repeats its body as long as the condition stays true. The
 * condition is checked BEFORE each pass, so if it is false from the start the
 * body never runs at all.
 *
 * The variable the condition depends on (here `remaining`) must change inside
 * the body, otherwise the loop never ends -- an infinite loop.
 */

int main(void) {
    int remaining;

    printf("How many wolves are still howling: ");
    if (scanf("%d", &remaining) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (remaining <= 0) {
        printf("The night is silent.\n");
        return 0;
    }

    /* Count the howls down to zero, one per pass. */
    while (remaining > 0) {
        printf("%d wolves still howling...\n", remaining);
        remaining = remaining - 1;   /* shrink toward the stop condition */
    }

    printf("Silence at last.\n");

    return 0;
}
