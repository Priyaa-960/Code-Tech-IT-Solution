# Code-Tech-IT-Solution
Temperature converter code
#include <stdio.h>

int main() {
    int choice;
    float temp;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter Celsius: ");
        scanf("%f", &temp);
        printf("Fahrenheit = %.2f", (temp * 9/5) + 32);
    }
    else if(choice == 2) {
        printf("Enter Fahrenheit: ");
        scanf("%f", &temp);
        printf("Celsius = %.2f", (temp - 32) * 5/9);
    }
    else {
        printf("Invalid Choice");
    }

    return 0;
}
