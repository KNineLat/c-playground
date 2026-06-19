#include <limits.h>
#include <stdio.h>

/*
 * Exercise 04: factorial
 *
 * Read a non-negative integer N and compute N! (N factorial):
 *   N! = 1 * 2 * 3 * ... * N
 * and by definition 0! = 1.
 *
 * Print: "N! = <result>"
 *
 * Hints:
 *   - This is the accumulator pattern again, but the running value is a
 *     PRODUCT, so it must start at 1 (not 0 -- multiplying by 0 stays 0).
 *   - Factorials grow fast. 13! already overflows a 32-bit int. You can keep
 *     it simple and just trust small inputs, or reject N that is too large.
 *   - If N is negative, print "Data input is invalid" and return 1.
 */

int main(void) {
    int n;
    unsigned long long result = 1;

    printf("Enter N: ");
    if (scanf("%d", &n) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (n < 0) {
        printf("Data input is invalid, check if your input is negative\n");
        return 1;
    }

    for (int count = 1; n >= count; count++) {
        if (result > ULLONG_MAX / count) {
            printf("Unable to calculate, the number will overflow unsigned long long\n");
            return 1;
        }
        result = result * count;
    }

    printf("%d! = %llu\n", n, result);

    return 0;
}
