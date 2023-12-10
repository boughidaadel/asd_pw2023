#include <stdio.h>

// A main function to calculate X^n using a loop
int main()
{
    // Declare three variables to store X, n, and the result
    int X, n, result;
    // Initialize the result to 1
    result = 1;
    // Prompt the user to enter X and n
    printf("Enter X and n: ");
    // Read X and n from the standard input
    scanf("%d^%d", &X, &n);

    if (X >= 0 || n >= 0)
    {
        // If they are, print a message
        printf("ERROR! X  or n is negative ! \n");
    }
    else
    {

        // Use a loop to multiply the result by X n times
        for (int i = 0; i < n; i++)
        {
            result = result * X;
        }
        // Print the result
        printf("X^n = %d\n", result);
    }


    return 0;
}
