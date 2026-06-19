#include <stdio.h>

/*
 * Lesson 02: the for loop
 *
 * A for loop packs three things into one line:
 *   for (initialization; condition; update)
 *      - initialization runs once, before the loop starts
 *      - condition is checked before every pass (same as while)
 *      - update runs after every pass
 *
 * It is the natural choice when you know how many times to repeat, or when you
 * are counting over a clear range. Anything a for loop does, a while loop can
 * do too -- for just keeps the counter logic in one place.
 */

int main(void) {
    int nights;
    int total;

    printf("Over how many nights did you count howls: ");
    if (scanf("%d", &nights) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    total = 0;

    /* `night` exists only for the duration of the loop (C99 scope). */
    for (int night = 1; night <= nights; night++) {
        printf("Night %d\n", night);
        total = total + night;   /* accumulate: total grows each pass */
    }

    printf("Sum of the night numbers: %d\n", total);

    return 0;
}
