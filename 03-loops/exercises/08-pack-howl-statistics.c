#include <stdio.h>

/*
 * Exercise 08: pack howl statistics (capstone)
 *
 * Read how many wolves are in the pack (N), then read N howl counts (one
 * integer per wolf) in a loop. While reading, gather a few statistics and
 * print them at the end:
 *   "Total howls: <sum>"
 *   "Average howls: <avg with two decimals>"
 *   "Loudest: <max>"
 *   "Quietest: <min>"
 *   "Wolves that stayed silent (0 howls): <count>"
 *
 * This pulls together everything so far: a counting loop, the accumulator
 * pattern, conditionals to track max/min/count, and int-vs-float division
 * with a cast for the average.
 *
 * Hints:
 *   - N must be at least 1 (you cannot average an empty pack). If N <= 0,
 *     print "Data input is invalid" and return 1.
 *   - A for loop over 1..N is the natural shape for "read N values".
 *   - max/min: seed them from the FIRST value, then compare each later value.
 *     Seeding from 0 would break for an all-negative... here howls are >= 0,
 *     but seeding from the first reading is the habit worth building.
 *   - Average: sum and N are both int, so sum / N truncates. Cast one operand
 *     to (float) (or double) and print with %.2f -- see notes/data-types.md
 *     and 01-basics/04-float-division-and-casting style.
 */

int main(void) {
    int pack_size;
    int howls;
    int sum = 0;
    int max;
    int min;
    int silent = 0;
    float average_howls;

    printf("How many wolves in the pack: ");
    if (scanf("%d", &pack_size) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    if (pack_size <= 0) {
        printf("Pack size can't be zero or a negative value\n");
        return 1;
    }

    for (int count = 1; count <= pack_size; count++) {
        printf("Enter how many times wolf %d howled: ", count);
        if (scanf("%d", &howls) != 1) {
            printf("Data input is invalid\n");
            return 1;
        }

        // Validate that the howl count isn't negative
        if (howls < 0) {
            printf("Wolf couldn't howl negative amount of times!\n");
            return 1;
        }

        // Initialize variables
        if (count == 1) {
            min = howls;
            max = howls;
        }

        sum = howls + sum;
        if (max < howls) {
            max = howls;
        }
        if (min > howls) {
            min = howls;
        }
        if (howls == 0) {
            silent = silent + 1;
        }
    }

    // We already checked if pack_size equals to 0
    average_howls = (float)sum / pack_size;

    printf("__________________________________________________________\n"
           "Total howls: %d\n"
           "Average howls: %.2f\n"
           "Loudest: %d\n"
           "Quietest: %d\n"
           "Wolves that stayed silent (0 howls): %d\n"
           "__________________________________________________________\n"
           , sum, average_howls, max, min, silent);

    return 0;
}
