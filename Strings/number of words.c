#include <stdio.h>
#include<string.h>
#define size 100

int main() {
    char text[size];
    printf("Enter text: ");
    gets(text);
    int words =1;
    int i=0;
    while(text[i]!='\0'){
    if(text[i] == ' ' || text[i] == '\t' || text[i] == '\n'){
        words++;
    }
    i++;
    }
    printf("No. of words: %d\n",words);
}

