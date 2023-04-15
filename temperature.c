#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;
    printf("Enter the temp in farienheit:");
    scanf("%f",&f);
    c=(f-32)*(5.00/9.00);
    printf("The temp in celcius:%f",c);
    return 0;
}

