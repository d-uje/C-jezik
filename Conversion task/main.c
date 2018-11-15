/* Author: Duje Rada
   Purpose: App that converts minutes into days and years
   Date 06.10.2018.
   */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutesEntered = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0.0;

    printf("Please enter the number of minutes that you want to convert to days and years: ");
    scanf("%d", &minutesEntered);

    minutesInYear = (60 * 24 * 365);
    years = (minutesEntered / minutesInYear);
    days = minutesEntered / (60.0 * 24.0);

    printf("You have entered %d minutes which is aprox. %lf years and %lf days", minutesEntered, years, days);

    return 0;
}
