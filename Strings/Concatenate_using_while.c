#include <stdio.h>
#include<string.h>

int main() {
    int size=100;
    int count=0;
    char text1[size];
    gets(text1);
    char text2[size];
    gets(text2);
    int len1 = strlen(text1);
    int len2 = strlen(text2);
    char new[size];
    int i=0;
    while(text1[i]!='\0'){
        text1[i++];
    }
    int j=0;
    while(text2[j]!='\0')
    {
        text1[i] = text2[j];
        i++;
        j++;
    }
    text1[i] = '\0';
    printf("Text 1: %s\n",text1);
    printf("Text 2: %s",text2);
    return 0;
}
