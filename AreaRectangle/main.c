#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length = 0.0;
    float width = 0.0;
    float area = 0.0;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = (length * width);

    printf("Area of rectangle: %f units\n", area);

    return 0;
}
