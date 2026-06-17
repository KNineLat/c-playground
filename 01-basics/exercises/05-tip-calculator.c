#include <stdio.h>

int main(void) {
    float food_bill;
    int tip_percentage;
    int number_of_people;
    float tip_fraction;
    float tip_amount;
    float total_bill;
    float cost_per_person;

    printf("Welcome to the tip calculator!\n");

    printf("What's the food bill: ");
    if (scanf("%f", &food_bill) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    printf("What tip percentage would you like to pay: ");
    if (scanf("%d", &tip_percentage) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    printf("How many people were eating: ");
    if (scanf("%d", &number_of_people) != 1) {
        printf("Data input is invalid\n");
        return 1;
    }

    tip_fraction = (float)tip_percentage / 100;
    tip_amount = food_bill * tip_fraction;
    total_bill = food_bill + tip_amount;
    cost_per_person = total_bill / number_of_people;

    printf("Tip is equal to: %.2f PLN\n", tip_amount);
    printf("Total bill is equal to: %.2f PLN\n", total_bill);
    printf("Per person: %.2f PLN\n", cost_per_person);

    return 0;
}
