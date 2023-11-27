#include <stdio.h>

int main() {
    int N, i, product, num, sum;
    float average;

    i = 0;
    sum = 0;
    product = 1;

    printf("Enter an integer N: ");
    scanf("%d", &N);

    while (i < N) {
        printf("Enter a number : ");
        scanf("%d", &num);
        sum = sum + num;
        product = product * num;
        i = i+1;
    }

    average = sum / N;

    printf("Sum: %.2d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %.2f\n", average);

    return 0;
}
