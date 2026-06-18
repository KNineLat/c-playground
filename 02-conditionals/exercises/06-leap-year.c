#include <stdio.h>

/*
 * Exercise 06: leap year
 *
 * Read a year from the user and print whether it is a leap year:
 *   "2024 is a leap year."
 *   "2023 is not a leap year."
 *
 * The rules (combine them with the logical operators && and ||):
 *   - a year divisible by 4 is a leap year,
 *   - EXCEPT years divisible by 100, which are NOT leap years,
 *   - EXCEPT years divisible by 400, which ARE leap years again.
 *
 * So 2000 is a leap year, but 1900 is not.
 *
 * Hint: "divisible by 4" means `year % 4 == 0`. Try to express the whole
 * rule as a single condition in one if statement.
 */

int main(void) {
    int year;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0)) {
        printf("Year %d is a leap year!\n", year);
    } else {
        printf("Year %d is not a leap year!\n", year);
    }

    return 0;
}
