#include<stdio.h>

int main()
{
    int num, count, navg=0;
    float x, average, sum=0;
    printf("How many numbers?");
    scanf("%d",&num);
    count=1;
    do
    {
        printf("x=");
        scanf("%f",&x);
        if(x<0)
        {
            printf("ERROR-NEGATIVE VALUE FOR x \n");
            continue;
        }
        sum+=x;
        ++navg;
        count++;
    }
    while(count<=num);
    average=sum/navg;
    printf("\n The average is %f \n",average);
    return 0;
}
