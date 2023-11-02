#include <stdio.h>

int main() {
    int k,a;
    k=1;
    while(k<=5)
    {
        a=1;
        while(a<=5)
        {
            printf("%d",a);
            a=a+1;
        }
        printf("\n");
        k=k+1;
    }
    return 0;
}
