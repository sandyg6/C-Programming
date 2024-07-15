#include <stdio.h>
#include<string.h>
#define size 100

int compare(char *str1, char *str2);
int main() {
    char text[size];
    printf("Enter text: ");
    gets(text);
    char *s = text;
    while(*s){
        *s = (*s>='a' && *s <= 'z') ? *s-32:*s;
        s++;
    }
    printf("%s",text);
    
}
