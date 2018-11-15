#include <stdio.h>
#include <stdlib.h>

int main()
{
    float value1, value2;
    char operator;

    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch (operator)
    {
    case '+':
        printf("Result: %.2f\n", value1 + value2);
        break;
    case '-':
        printf("Result: %.2f\n", value1 - value2);
        break;
    case '*':
        printf("Result: %.2f\n", value1 * value2);
        break;
    case '/':
        if ( value2 == 0)
        {
            printf("Division by 0
                    is not allowed");
        } else
        printf("Result: %.2f", value1 / value2);
        break;
    default:
        printf("Unknown operator");
        break;
    }


    return 0;
}
