#include <stdio.h>
#include<string.h>
#define size 100

int main() {
    char text[size];
    printf("Enter text: ");
    gets(text);
    char *s = text;
    while(*s){
        *s = (*s>='A' && *s <= 'Z') ? *s+32:*s;
        s++;
    }
    printf("%s",text);
    
}
