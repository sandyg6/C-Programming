#include<stdio.h>
void swap(char,char);
void main()
{
  char char1,char2;
  printf("Enter two characters:");
  scanf("%c %c",&char1,&char2);
  printf("\n Before swaping the characters: character1=%c and character2=%c",char1,char2);
  swap(char1,char2);
}
void swap(char x,char y)
{
  char z;
  z=x;
  x=y;
  y=z;
  printf("\nAfter swapping the characters: character1=%c and character2=%c",x,y);
}
  
