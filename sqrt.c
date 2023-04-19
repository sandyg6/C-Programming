#include<stdio.h>
#include<math.h>

int main()
{
    float num,res;
    input:
    printf("Enter a number(to end press -ve value):");
    scanf("%f",&num);
    if(num<=0)
    goto end;
    res=sqrt(num);
    printf("The  square root of %f is %f\n",num,res);
    goto input;
    end:
    printf("Press any key");
    return 0;
}
