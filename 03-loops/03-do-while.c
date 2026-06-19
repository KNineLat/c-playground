#include <stdio.h>

/*
 * Lesson 03: the do-while loop
 *
 * do-while is the only loop that checks its condition AFTER the body, so the
 * body always runs at least once. That makes it a good fit for "ask, then
 * decide whether to ask again" -- like re-prompting until the input is valid.
 *
 * Note the semicolon after the closing while(...) -- it is required here.
 */

int main(void) {
    int paw_count;

    /* Keep asking until the answer makes sense (a wolf has four paws). */
    do {
        printf("How many paws does a wolf have: ");
        if (scanf("%d", &paw_count) != 1) {
            printf("Data input is invalid\n");
            return 1;
        }

        if (paw_count != 4) {
            printf("Not quite -- try again.\n");
        }
    } while (paw_count != 4);

    printf("Correct! A wolf has four paws.\n");

    return 0;
}
