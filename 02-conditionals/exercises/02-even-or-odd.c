#include <stdio.h>

/*
 * Exercise 02: even or odd
 *
 * Read an integer and print whether it is even or odd.
 *
 * Hint: the modulo operator `%` gives the remainder of integer division,
 * so `x % 2` is 0 for even numbers.
 *
 * Bonus: handle negative numbers correctly (-4 is even, -3 is odd --
 * does your solution already work for them?).
 */

int main(void) {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (number % 2 == 0) {
        printf("Number is even.\n");
    } else {
        printf("Number is odd.\n");
    }

    return 0;
}
