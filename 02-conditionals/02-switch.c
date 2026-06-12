#include <stdio.h>

/*
 * Lesson 02: the switch statement
 *
 * switch compares one integer (or char) value against constant cases.
 * Without `break` execution "falls through" into the next case -- sometimes
 * useful, usually a bug. `default` catches everything else.
 */

int main(void) {
    int day;

    printf("Enter a day of the week (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday: the hunt begins.\n");
            break;
        case 2:
            printf("Tuesday: patrolling the territory.\n");
            break;
        case 3:
            printf("Wednesday: teaching the pups.\n");
            break;
        case 4:
            printf("Thursday: a long trek.\n");
            break;
        case 5:
            printf("Friday: a great hunt.\n");
            break;
        /* Fall-through on purpose: 6 and 7 share one message. */
        case 6:
        case 7:
            printf("Weekend: howling at the moon.\n");
            break;
        default:
            printf("There is no day number %d.\n", day);
            break;
    }

    return 0;
}
