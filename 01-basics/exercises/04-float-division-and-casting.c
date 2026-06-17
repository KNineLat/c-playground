#include <stdio.h>

int main(void) {
    int total_howls;
    int wolves_in_pack;
    float average_howls_per_wolf;
    int whole_part;
    float fractional_part;

    printf("How many times did you hear wolves howl tonight: ");
    if (scanf("%d", &total_howls) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    printf("How many wolves are in the pack: ");
    if (scanf("%d", &wolves_in_pack) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    average_howls_per_wolf = (float)total_howls / wolves_in_pack;
    printf("On average one wolf howled %.2f times a night\n", average_howls_per_wolf);

    whole_part = (int)average_howls_per_wolf;
    fractional_part = average_howls_per_wolf - whole_part;
    printf("Fractional part: %.2f\n", fractional_part);

    return 0;
}
