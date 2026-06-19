#include <stdio.h>

/*
 * Exercise 01: count up to N
 *
 * Read a single integer N. Print every integer from 1 up to and including N,
 * one per line:
 *   1
 *   2
 *   ...
 *   N
 *
 * If N is less than 1, print nothing after the prompt (the loop body should
 * simply never run -- let the condition handle that, no extra if needed).
 *
 * Hint: a for loop is the natural fit. The counter starts at 1 and the
 * condition keeps it <= N.
 */

int main(void) {
    int n;

    printf("Enter N: ");
    if (scanf("%d", &n) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    for (int count = 1; count <= n; count++) {
        printf("%d\n", count);
    }

    return 0;
}
