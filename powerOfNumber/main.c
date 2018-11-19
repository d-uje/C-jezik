#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float base = 0.0;
    float exponent = 0.0;
    float power = 0.0;

    printf("Enter a base: ");
    scanf("%f", &base);

    printf("Enter exponent: ");
    scanf("%f", &exponent);

    power = pow(base, exponent);

    printf("%.f ^ %.f = %.2f", base, exponent, power);

    return 0;
}
