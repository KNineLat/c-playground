#include <stdio.h>

int main(void) {
    float temperature_in_celsius;
    float conversion_factor;
    float temperature_in_fahrenheit;

    printf("Welcome to the temperature converter!\n");

    printf("Enter temperature in °C: ");
    scanf("%f", &temperature_in_celsius);

    conversion_factor = 9/5.0f;
    temperature_in_fahrenheit = temperature_in_celsius * conversion_factor + 32.0f;

    printf("%.1f °C is %.1f °F\n", temperature_in_celsius, temperature_in_fahrenheit);

    return 0;
}
