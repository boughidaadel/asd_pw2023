#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Draw a solid square
    printf("Solid Square:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Draw a right-angled triangle
    printf("Right-angled Triangle:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
