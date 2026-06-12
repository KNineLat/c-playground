#include <stdio.h>

int main(void) {
    int rectangle_width;
    int rectangle_length;
    int rectangle_area;
    int rectangle_perimeter;

    printf("Enter rectangle width: ");
    scanf("%d", &rectangle_width);

    printf("Enter rectangle length: ");
    scanf("%d", &rectangle_length);

    rectangle_area = rectangle_width * rectangle_length;
    rectangle_perimeter = rectangle_width * 2 + rectangle_length * 2;

    printf("Rectangle area is: %d\n", rectangle_area);
    printf("Rectangle perimeter is: %d\n", rectangle_perimeter);

    return 0;
}
