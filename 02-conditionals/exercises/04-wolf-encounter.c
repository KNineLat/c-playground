#include <stdio.h>

/*
 * Exercise 04: wolf encounter (logical operators)
 *
 * You meet a wolf pack in the forest. Read two values:
 *   - the number of wolves in the pack
 *   - the distance to the pack in meters
 *
 * Print the advice:
 *   - 0 wolves                          -> "No wolves around. Enjoy the walk."
 *   - 1-2 wolves AND distance >= 50     -> "Observe quietly from afar."
 *   - 1-2 wolves AND distance < 50      -> "Back away slowly."
 *   - 3 or more wolves OR distance < 10 -> "Do not run. Make yourself look big."
 *
 * Check the conditions in an order that makes the last rule win when
 * it applies (e.g. 5 wolves at 100 m is still the last case).
 */

int main(void) {
    int wolves;
    int distance;

    printf("How many wolves do you see: ");
    if (scanf("%d", &wolves) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    printf("How far away are they (meters): ");
    if (scanf("%d", &distance) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (wolves == 0) {
        printf("No wolves around. Enjoy the walk.\n");
    } else if (wolves >= 3 || distance < 10) {
        printf("Do not run. Make yourself look big.\n");
    } else if ((wolves == 1 || wolves == 2) && distance >= 50) {
        printf("Observe quietly from afar.\n");
    } else {
        printf("Back away slowly.\n");
    }

    return 0;
}
