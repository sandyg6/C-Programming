#include <stdio.h>
#include<string.h>
#define size 100

int main() {
    char str[size];
    printf("Enter text: ");
    gets(str);
    char *text = str;
    int alphabets,digits,special;
    alphabets = digits = special = 0;
    while(*text){
    if((*text >= 'A' && *text <= 'Z') || (*text>= 'a' && *text <= 'z')){
        alphabets++;
    }
    else if(*text>= '0' && *text <= '9'){
        digits++;
    }
    else{
        special++;
    }
    text++;
    }
    printf("No. of Alphabets: %d\n",alphabets);
    printf("No. of Digits: %d\n", digits);
    printf("No. of Special characters: %d\n",special);
}

