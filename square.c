#include<stdio.h>

int main()
{
  int i, num, square;
  printf("Enter a number:");
  scanf("%d",&num);
  printf("Number \t Square \n\n");
  for(i=1;i<=num;i++)
  {
      printf("%d \t\t %d \n",i, i*i);
  }
}
