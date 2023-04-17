#include<stdio.h>

void main()
{
    int num,s,p=0,x;
    printf("Enter a number:");
    scanf("%d",&num);
    x=num;
    while(num>0)
    {
        s=num%10;
        p+=s;
        num=num/10;
    }
    printf("The sum of digits of the number %d is %d",x,p);
}
