#include <stdio.h>

int main() {
    float num1, num2;
    int choice;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("**************** MENU ***************\n");
    printf("1: ----------> Sum ------------------\n");
    printf("2: ----------> Product --------------\n");
    printf("3: ----------> Average --------------\n");
    printf("4: ----------> Minimum --------------\n");
    printf("5: ----------> Maximum --------------\n");
    printf("-------------------------------------\n");
    printf("What's your choice? ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum = %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Product = %.2f\n", num1 * num2);
            break;
        case 3:
            printf("Average = %.2f\n", (num1 + num2) / 2);
            break;
        case 4:
            if (num1 < num2) {
                printf("Minimum = %.2f\n", num1);
            } else {
                printf("Minimum = %.2f\n", num2);
            }
            break;
        case 5:
            if (num1 > num2) {
                printf("Maximum = %.2f\n", num1);
            } else {
                printf("Maximum = %.2f\n", num2);
            }
            break;
        default:
            printf("Invalid choice. Please enter a number from 1 to 5.\n");
            break;
    }

    return 0;
}
