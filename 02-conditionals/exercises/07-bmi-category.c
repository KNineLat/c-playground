#include <stdio.h>

/*
 * Exercise 07: BMI category
 *
 * Read a person's weight in kilograms (float) and height in meters (float),
 * compute the Body Mass Index and print its category.
 *
 *   BMI = weight / (height * height)
 *
 * Categories (use an if / else if / else chain):
 *   BMI < 18.5            -> "Underweight"
 *   18.5 <= BMI < 25.0    -> "Normal weight"
 *   25.0 <= BMI < 30.0    -> "Overweight"
 *   BMI >= 30.0           -> "Obesity"
 *
 * Print the BMI with two decimals first, then the category, e.g.:
 *   "BMI: 22.86 -> Normal weight"
 *
 * Hint: both inputs are float, so the division already keeps the fraction --
 * no cast needed here. Reject a height of 0 or less before dividing.
 */

int main(void) {
    float weight_kg;
    float height_m;
    float calculated_bmi;

    printf("Enter weight in kg: ");
    if (scanf("%f", &weight_kg) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    printf("Enter height in meters: ");
    if (scanf("%f", &height_m) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (weight_kg <= 0 || height_m <= 0) {
        printf("Entered weight (%.02f) or height (%.02f) is invalid.\n", weight_kg, height_m);
        printf("Tip: check whether either of them is negative or equals 0.\n");
        return 1;
    }

    calculated_bmi = weight_kg / (height_m * height_m);

    if (calculated_bmi >= 30.0f) {
        printf("Your result is %.02f and means: Obesity\n", calculated_bmi);
    } else if (calculated_bmi >= 25.0f) {
        printf("Your result is %.02f and means: Overweight\n", calculated_bmi);
    } else if (calculated_bmi >= 18.5f) {
        printf("Your result is %.02f and means: Normal weight\n", calculated_bmi);
    } else {
        printf("Your result is %.02f and means: Underweight\n", calculated_bmi);
    }

    return 0;
}
