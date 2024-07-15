#include <stdio.h>
#include<string.h>
#define size 100

int main() {
    char str[size];
    printf("Enter text: ");
    gets(str);
    char *text = str;
    int vowels, consonents;
    vowels = consonents = 0;
    int i=0;
    while(text[i]!='\0'){
    if((text[i] >= 'A' && text[i] <= 'Z') || (text[i]>= 'a' && text[i] <= 'z')){
        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u'||
           text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U'){
               vowels++;
           }
        else{
            consonents++;
        }
    }
    i++;
    }
    printf("No. of Vowels: %d\n",vowels);
    printf("No. of Consonents : %d\n", consonents);
}

