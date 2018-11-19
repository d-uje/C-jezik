/* Author: Duje Rada
   Date: 19.11.2018
   Purpose: Arithmetic calculator app
   */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //initialize
    int num1 = 0.0;
    int num2 = 0.0;
    float sum, diff, product, quo, mod;

    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);

    //do the operations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quo = num1 / num2;
    mod = num1 % num2;


    printf("Sum: %f\n", sum);
    printf("Difference: %f\n", diff);
    printf("Product: %f\n", product);
    printf("Quotient: %f\n", quo);
    printf("Modulus: %f\n", mod);

    return 0;
}
