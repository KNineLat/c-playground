#include <stdio.h>

/*
 * Exercise 05: multiplication table
 *
 * Read an integer N and print its multiplication table from 1 to 10:
 *   N x 1 = ...
 *   N x 2 = ...
 *   ...
 *   N x 10 = ...
 *
 * Hints:
 *   - One for loop with a counter going 1..10 is all you need.
 *   - The counter is both printed and used in the multiplication.
 */

int main(void) {
    int n;
    long multiplication_result;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    for (int count = 1; count <= 10; count++) {
        multiplication_result = n * count;
        printf("%d x %d = %ld\n", n, count, multiplication_result);
    }

    printf("Wolves like eating numbers: %ld 🐑 eaten\n", multiplication_result);

    return 0;
}
