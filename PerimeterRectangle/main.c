#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length = 0.0;
    float width = 0.0;
    float perimeter = 0.0;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    perimeter = 2 * (length  + width);

    printf("Perimeter of rectangle: %f units\n", perimeter);


    return 0;
}
