#include <stdio.h>

/*
 * Exercise 03: grade from a score
 *
 * Read a test score (0-100) and print the grade:
 *   90-100  ->  "Grade: A"
 *   75-89   ->  "Grade: B"
 *   60-74   ->  "Grade: C"
 *   50-59   ->  "Grade: D"
 *    0-49   ->  "Grade: F"
 *
 * If the score is below 0 or above 100, print "Invalid score." instead.
 *
 * Hint: check the invalid range first, then go from the highest grade
 * down -- that way each `else if` only needs one comparison.
 */

int main(void) {
    int score;

    printf("Enter the test score (0-100): ");
    if (scanf("%d", &score) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (score > 100 || score < 0) {
        printf("Invalid score.\n");
    } else if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 75) {
        printf("Grade: B\n");
    } else if (score >= 60) {
        printf("Grade: C\n");
    } else if (score >= 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
