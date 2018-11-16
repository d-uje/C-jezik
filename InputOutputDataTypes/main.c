/* Author: Duje Rada
   Purpose: Application to display primitive data types
   Date: 16.11.2018.
   */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare all primitive types
    char charVal;
    unsigned char uCharVal;

    short shortVal = 0;
    unsigned short uShortVal = 0;

    int intVal = 0;
    unsigned int uIntVal = 0;

    long longVal = 0;
    unsigned long uLongVal = 0;

    long long longLongVal = 0;
    unsigned long long uLongLongVal = 0;

    float floatVal = 0.0;
    double doubleVal = 0.0;
    long double longDoubleVal = 0;


    //Read input from user
    printf("Enter a character: ");
    charVal = getchar();
    getchar();

    printf("Enter another character: ");
    uCharVal = getchar();
    getchar();

    printf("Enter a signed short: ");
    scanf("%d", &shortVal);

    printf("Enter a unsigned short: ");
    scanf("%d", &uShortVal);

    printf("Enter a signed int: ");
    scanf("%d", &intVal);

    printf("Enter a unsigned int: ");
    scanf("%d", &uIntVal);

    printf("Enter a signed long: ");
    scanf("%d", &longVal);

    printf("Enter a unsigned long: ");
    scanf("%d", &uLongLongVal);

    printf("Enter a signed long long: ");
    scanf("%lld", &longLongVal);

    printf("Enter a unsigned long long: ");
    scanf("%llu", uLongLongVal);

    printf("Enter a float: ");
    scanf("%f", &floatVal);

    printf("Enter a double: ");
    scanf("%lf", &doubleVal);

    printf("Enter a long double: ");
    scanf("%Lf", longDoubleVal);


    return 0;
}
