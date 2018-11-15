/* Author: Duje
   Purpose: Defineing enum types
   Date:  05.10.2018
   */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number, sign;

    printf("Please type in a number: ");
    scanf("%d", number);

    if (number < 0)
        sign = -1;
    else if (number == 0)
        sign = 0;
    else
        sign = 1;

    printf("Sign: %d\n", sign);

    return 0;

}
