#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company variable1 = XEROX;
    enum Company variable2 = GOOGLE;
    enum Company variable3 = EBAY;

    printf("Value of XEROX is: %i\n Value of GOOGLE is: %i\n Value of EBAY is: %i\n", XEROX, GOOGLE, EBAY);

    printf("Hello world!\n");
    return 0;
}
