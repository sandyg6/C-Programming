#include <stdio.h>
#include<string.h>
#define size 100

int main() {
    char text[size];
    printf("Enter text: ");
    gets(text);
    int i=0;
    while(text[i]!='\0'){
        if(text[i]>='a' && text[i]<='z'){
            text[i] = text[i]- 32;
        }
        i++;
    }
    printf("%s",text);
    
}
