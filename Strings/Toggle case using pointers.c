#include <stdio.h>
#include<string.h>
#define size 100

void toggle_case(char *text);

int main() {
    char str[size];
    printf("Enter text: ");
    gets(str);
    toggle_case(str);
    printf("%s",str);
}

void toggle_case(char *text){
    while(*text){
        if(*text >= 'A' && *text <= 'Z'){
            *text+=32;
        }
        else if(*text>= 'a' && *text <= 'z'){
            *text-=32;
        }
        text++;
    }
}
