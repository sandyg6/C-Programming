#include <stdio.h>

int main() {
    int k,a;
    k=5;
    while(k>=1)
    {
        a=5;
        while(a>=k)
        {
            printf("%d",a);
            a=a-1;
        }
        printf("\n");
        k=k-1;
    }
    return 0;
}
