#include <stdio.h>

int main(void) {
    int rectangle_width;
    int rectangle_length;
    int rectangle_area;
    int rectangle_perimeter;

    printf("Enter rectangle width: ");
    if (scanf("%d", &rectangle_width) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    printf("Enter rectangle length: ");
    if (scanf("%d", &rectangle_length) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    rectangle_area = rectangle_width * rectangle_length;
    rectangle_perimeter = rectangle_width * 2 + rectangle_length * 2;

    printf("Rectangle area is: %d\n", rectangle_area);
    printf("Rectangle perimeter is: %d\n", rectangle_perimeter);

    return 0;
}
