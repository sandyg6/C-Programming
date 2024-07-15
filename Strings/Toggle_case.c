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
    int i=0;
    while(text[i]!='\0'){
        if(text[i] >= 'A' && text[i] <= 'Z'){
            text[i]+=32;
        }
        else if(text[i]>= 'a' && text[i] <= 'z'){
            text[i]-=32;
        }
        
        i++;
    }
}
