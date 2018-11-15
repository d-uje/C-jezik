#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i= 1, j = 2; i <= 5; ++i, j += 2)
        printf("%3d", i*j);

    return 0;
}
