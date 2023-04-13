#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,d,e,f,g,h,i,result;
   printf("Enter  5 digit no:");
   scanf("%d",&a);
   b=a/10;
   c=a%10;
   d=b/10;
   e=b%10;
   f=d/10;
   g=d%10;
   h=f/10;
   i=f%10;
   result=(c*10000)+(e*1000)+(g*100)+(i*10)+(h*1);
   printf("The reversed number:%d",result);
   return 0;
}
