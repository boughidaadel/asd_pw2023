#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    i = 0;
    while(i < n)
    {
        j = 0;
        while(j <= i)
        {
            printf("* ");
            j++;
        }
        i++;
        printf("\n");
    }

    return 0;
}
