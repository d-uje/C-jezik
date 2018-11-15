/* Author: Duje Rada
   Purpose: Trying out switch
   Date: 07.11.2018.
   */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum weekdays {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum weekdays today;

    printf("What day is it today?\n");
    printf("Enter 1 for Monday, 2 for tuesday, 3 for wednesday, 4 for thursday, 5 for friday, 6 for saturday, 7 for sunday\n");
    scanf("%d", &today);

    switch (today)
    {
    case Sunday:
        printf("Today is Sunday\n");
        break;
    case Monday:
        printf("Today is Monday\n");
        break;
    case Tuesday:
        printf("Today is Tuesday");
        break;
    default:
        printf("I dont know");
        break;
    }
    return 0;
}
