#include <stdio.h>

/*
 * Exercise 07: power without pow()
 *
 * Read a base and a non-negative exponent (two integers) and compute
 * base raised to the exponent, WITHOUT using pow() from <math.h>. Print:
 *   "<base>^<exp> = <result>"
 *
 * Examples: 2^10 = 1024, 5^0 = 1, 3^3 = 27.
 *
 * Hints:
 *   - Accumulator pattern: start the result at 1 and multiply by the base
 *     `exp` times.
 *   - Anything to the power 0 is 1 -- the loop simply runs zero times, so a
 *     correct loop already handles this with no special case.
 *   - If the exponent is negative, print "Data input is invalid" and return 1
 *     (we are staying with integers here).
 */

int main(void) {
    int base;
    int exp;
    long long result = 1;

    printf("Enter base and exponent: ");
    if (scanf("%d %d", &base, &exp) != 2) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (exp < 0) {
        printf("Data input is invalid (negative exponent)\n");
        return 1;
    }

    for (int count = 0; count < exp; count++) {
        result = result * base;
    }

    printf("%d^%d = %lld\n", base, exp, result);

    return 0;
}
