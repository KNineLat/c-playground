#include <stdio.h>

/*
 * Exercise 02: howl countdown
 *
 * Read a positive integer N (number of wolves). Count DOWN from N to 1,
 * printing each number, then print a final line:
 *   N
 *   ...
 *   1
 *   The pack is silent.
 *
 * If N is 0 or negative, print only "The pack is silent."
 *
 * Hint: a while loop reads cleanly here. Start at N and shrink the counter
 * each pass until the condition stops being true. Make sure something inside
 * the loop changes the counter -- otherwise it never ends.
 */

int main(void) {
    int wolves;

    printf("How many wolves: ");
    if (scanf("%d", &wolves) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    while (wolves > 0) {
        printf("%d\n", wolves);
        wolves = wolves - 1;
    }

    printf("The pack is silent.\n");

    return 0;
}
