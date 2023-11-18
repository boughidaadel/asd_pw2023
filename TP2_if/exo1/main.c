#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if ((num1 > 0 && num2 > 0) || (num1 < 0 && num2 < 0))
    {
        printf("The product of the two numbers is positive.\n");
    }

    else
    {
        printf("The product of the two numbers is negative.\n");
    }

    return 0;
}
