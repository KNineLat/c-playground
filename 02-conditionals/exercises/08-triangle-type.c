#include <stdio.h>

/*
 * Exercise 08: triangle type
 *
 * Read the three side lengths of a triangle as integers (a, b, c).
 *
 * First check whether they can even form a triangle: every side must be
 * positive AND each side must be shorter than the sum of the other two
 * (a < b + c, and b < a + c, and c < a + b). If not, print:
 *   "These sides do not form a triangle."
 *
 * Otherwise classify it (use the logical operators):
 *   - all three sides equal      -> "Equilateral triangle."
 *   - exactly two sides equal    -> "Isosceles triangle."
 *   - no two sides equal         -> "Scalene triangle."
 *
 * Hint: the triangle-validity check is one big condition with &&. Do that
 * check first and return early, so the classification below only has to
 * worry about how many sides match.
 */

int main(void) {
    int a;
    int b;
    int c;

    printf("Enter three side lengths separated by spaces: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("The data is invalid!\n");
        printf("Tip: check whether any of them is negative or equals 0.\n");
        return 1;
    }

    if (a >= b + c || b >= a + c || c >= a + b) {
        printf("These sides do not form a triangle.\n");
        return 1;
    }

    if (a == b && b == c) {
        printf("Your triangle is called: Equilateral triangle\n");
    } else if (a != b && a != c && b != c) {
        printf("Your triangle is called: Scalene triangle\n");
    } else {
        printf("Your triangle is called: Isosceles triangle\n");
    }

    return 0;
}
