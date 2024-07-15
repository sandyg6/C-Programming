#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char text[MAX_SIZE]; 
    char * str = text; 
    int count = 0;

    printf("Enter any string: ");
    gets(text);

    while(*(str++) != '\0') count++;

    printf("Length of '%s' = %d", text, count);

    return 0;
}