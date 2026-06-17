#include <stdio.h>

/*
 * Exercise 01: positive, negative or zero
 *
 * Read an integer from the user and print exactly one of:
 *   "The number is positive."
 *   "The number is negative."
 *   "The number is zero."
 *
 * Use an if / else if / else chain.
 */

int main(void) {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
