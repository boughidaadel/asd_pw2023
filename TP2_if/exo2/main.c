#include <stdio.h>

int main()
{
    int copies, price = 0;

    printf("Enter the number of photocopies: ");
    scanf("%d", &copies);

    if (copies <= 0) {

      printf("Number of photocopies cannot be negative or zero! ");
    }
    else if (copies <= 10)
    {
        price = copies * 5;
        printf("The total price is %d DA.\n", price);

    }
    else if (copies <= 30)
    {
        price = 10 * 5 + (copies - 10) * 4;
        printf("The total price is %d DA.\n", price);
    }
    else
    {
        price = 10 * 5 + 20 * 4 + (copies - 30) * 3;
        printf("The total price is %d DA.\n", price);
    }



    return 0;
}
