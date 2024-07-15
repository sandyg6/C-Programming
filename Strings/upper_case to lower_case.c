#include <stdio.h>
#include<string.h>
#define size 100

int compare(char *str1, char *str2);
int main() {
    char text[size];
    printf("Enter text: ");
    gets(text);
    int i=0;
    while(text[i]!='\0'){
        if(text[i] >= 'A' && text[i] <= 'Z'){
            text[i]+=32;
        }
        i++;
    }
    printf("%s",text);
    
}
