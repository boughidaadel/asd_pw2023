#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    do
    {
        printf("Please enter an even number between 60 and 120: ");
        scanf("%d", &number);
        if(number > 120)
            printf("Smaller \n");
        if(number < 60)
            printf("Greater\n");
        if(number % 2 != 0)
            printf("The number is odd\n");
    }
    while (number % 2 != 0 || number > 120 || number < 60);
    return 0;
}
