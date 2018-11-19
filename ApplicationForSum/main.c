#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1 = 0;
    int number2 = 0;
    int sum = 0;

    printf("Input first number : ");
    scanf("%d", &number1);

    printf("Input second number: ");
    scanf("%d", &number2);

    sum = number1 + number2;

    printf("sum: %d", sum);

    return 0;
}
