#include <stdio.h>

/*
 * Exercise 03: sum from 1 to N
 *
 * Read an integer N and compute 1 + 2 + 3 + ... + N, then print:
 *   "The sum from 1 to N is: <result>"
 *
 * If N < 1 the sum is 0.
 *
 * Hint: this is the "accumulator" pattern. Keep a running total that starts
 * at 0 and add the counter to it on every pass of the loop.
 */

int main(void) {
    int n;
    int sum = 0;

    printf("Enter N: ");
    if (scanf("%d", &n) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    for (int count = 0; count <= n; count++) {
        sum = sum + count;
    }

    printf("The sum from 1 to %d is: %d\n", n, sum);

    return 0;
}
