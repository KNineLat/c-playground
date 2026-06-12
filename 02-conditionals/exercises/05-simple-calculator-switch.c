#include <stdio.h>
#include <stdlib.h>

/*
 * Exercise 05: simple calculator with switch
 *
 * Read two numbers (float) and an operator character: + - * /
 * Use a switch on the operator and print the result with two decimals,
 * e.g. "3.00 * 2.50 = 7.50".
 *
 * Special cases:
 *   - division by zero  -> print "Cannot divide by zero."
 *   - unknown operator  -> print "Unknown operator." (default case)
 *
 * Hint: ask scanf for " %c" (with a leading space) to skip the newline
 * left in the input buffer after reading the numbers.
 */

int main(void) {
    float first_number;
    float second_number;
    char operator;
    float result;

    printf("First number: ");
    scanf("%f", &first_number);
    printf("Second number: ");
    scanf("%f", &second_number);
    printf("Operator (+ - * /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = first_number + second_number;
            printf("%.2f + %.2f = %.2f\n", first_number, second_number, result);
            break;
        case '-':
            result = first_number - second_number;
            printf("%.2f - %.2f = %.2f\n", first_number, second_number, result);
            break;
        case '*':
            result = first_number * second_number;
            printf("%.2f * %.2f = %.2f\n", first_number, second_number, result);
            break;
        case '/':
            if (second_number == 0) {
                printf("Cannot divide by zero.\n");
                exit(1);
            }
            result = first_number / second_number;
            printf("%.2f / %.2f = %.2f\n", first_number, second_number, result);
            break;
        default:
            printf("Unknown operator.\n");
            break;
    }

    return 0;
}
