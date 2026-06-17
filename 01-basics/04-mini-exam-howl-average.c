#include <stdio.h>

int main(void) {
    int first_day_howls;
    int second_day_howls;
    int final_day_howls;
    int total_howls;
    float average_howls_count;

    printf("How many times did you hear wolves howl the night before last: ");
    if (scanf("%d", &first_day_howls) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }
    printf("How many times did you hear wolves howl last night: ");
    if (scanf("%d", &second_day_howls) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }
    printf("How many times did you hear wolves howl tonight: ");
    if (scanf("%d", &final_day_howls) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    total_howls = first_day_howls + second_day_howls + final_day_howls;
    average_howls_count = total_howls / 3.0f;

    printf("In total you heard wolves howl %d times. "
           "You heard an average of %.0f howls a night (exact value: %.2f).\n",
           total_howls, average_howls_count, average_howls_count);

    return 0;
}
