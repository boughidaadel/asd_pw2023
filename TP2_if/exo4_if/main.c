#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number from 1 to 7: ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Saturday\n");
    }
    else if (num == 2)
    {
        printf("Sunday\n");
    }
    else if (num == 3)
    {
        printf("Monday\n");
    }
    else if (num == 4)
    {
        printf("Tuesday\n");
    }
    else if (num == 5)
    {
        printf("Wednesday\n");
    }
    else if (num == 6)
    {
        printf("Thursday\n");
    }
    else if (num == 7)
    {
        printf("Friday\n");
    }
    else
    {
        printf("Invalid number. Please enter a number from 1 to 7.\n");
    }

    return 0;
}
