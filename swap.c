#include<stdio.h>

int main()
{
  int num1,num2;
  printf("Enter two numbers:");
  scanf("%d %d",&num1,&num2);
  printf("Before swapping, number1=%d, number2=%d",num1,num2);
  num1=num1^num2;
  num2=num1^num2;
  num1=num1^num2;
  printf("\nAfter swapping, number1=%d, number2=%d",num1,num2);
  return 0;
}
  
