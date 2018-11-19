#include <stdio.h>
#include <stdlib.h>

int main()
{
    //initialization
    float cm = 0;
    float meter = 0.0;
    float km = 0.0;

    printf("Enter length in centimeters: ");
    scanf("%f", &cm);

    meter = cm / 100.0;
    km = cm / 100000.0;

    printf("Length in m: %.2f\n", meter);
    printf("Length in km: %.3f\n", km);


    return 0;
}
