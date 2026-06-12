#include <stdio.h>

int main(void) {
    int wolves;

    printf("How many wolves do you see daily: ");
    scanf("%d", &wolves);

    printf("AWwoooo %d times. Tomorrow you will see %d wolves.\n", wolves, wolves + 42);
    return 0;
}
