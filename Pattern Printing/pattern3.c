#include <stdio.h>

int main() {
    int k,a;
    k=5;
    while(k>=1)
    {
        a=1;
        while(a<=5)
        {
            printf("%d",k);
            a=a+1;
        }
        printf("\n");
        k=k-1;
    }
    return 0;
}
