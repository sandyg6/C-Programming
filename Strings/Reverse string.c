#include <stdio.h>
#include<string.h>
#define size 100

int main() {
    char str[size], rev[size];
    printf("Enter text: ");
    gets(str);
    int i=0;
    while(str[i]!='\0') i++;
    int len = i;
    int strindex= len-1;
    int revindex =0;
    while(strindex>=0){
        rev[revindex] = str[strindex];
        revindex++;
        strindex--;
    }
    rev[revindex] = '\0';
    printf("Reversed string: %s", rev);
}

