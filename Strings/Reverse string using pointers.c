#include <stdio.h>
#include<string.h>
#define size 100

int main() {
    char str[size], rev[size];
    printf("Enter text: ");
    gets(str);
    char *s = str;
    char *r = rev;
    int len =0;
    while(*(s++))len++;
    s--;
    while(len>0){
        *(r++) = *(--s);
        len--;
    }
    *r = '\0';
    printf("Reversed string: %s", rev);
}

