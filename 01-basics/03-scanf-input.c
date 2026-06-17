#include <stdio.h>

int main(void) {
    int wolves;

    printf("How many wolves do you see daily: ");
    if (scanf("%d", &wolves) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    printf("AWwoooo %d times. Tomorrow you will see %d wolves.\n", wolves, wolves + 42);
    return 0;
}
