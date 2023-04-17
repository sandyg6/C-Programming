#include<stdio.h>

void main()
{
    int num,i;
    printf("Enter the value of n:");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        if(i%2!=0)
            continue;
        printf("%d\n",i);
    }
    printf("Done");
}
