#include <stdio.h>

/*
 * Exercise 06: sum of digits
 *
 * Read a non-negative integer and compute the sum of its digits. For example,
 * 1234 -> 1 + 2 + 3 + 4 = 10. Print:
 *   "Sum of digits: <result>"
 *
 * Hints:
 *   - You do not need strings or arrays for this. Use arithmetic:
 *       number % 10   gives the last digit
 *       number / 10   removes the last digit (integer division)
 *   - A while loop that runs until the number becomes 0 is the classic shape.
 *   - The input is destroyed as you go; that is fine, or copy it first if you
 *     want to print the original at the end.
 */

int main(void) {
    int number;
    int sum = 0;
    int temp_number;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (number < 0) {
        printf("Enter a non-negative value!\n");
        printf("Current value: %d\n", number);
        return 1;
    }

    temp_number = number;
    while (temp_number > 0) {
        sum = sum + (temp_number % 10);
        temp_number = temp_number / 10;
    }

    printf("Sum of digits for number %d is equal to %d\n", number, sum);

    return 0;
}
