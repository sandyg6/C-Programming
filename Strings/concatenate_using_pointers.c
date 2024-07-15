#include <stdio.h>
#include<string.h>

int main() {
    int size=100;
    int count=0;
    char text1[size];
    gets(text1);
    char text2[size];
    gets(text2);
    char *s1 = text1;
    char *s2 = text2;
    while(*(++s1));
    while(*(s1++)=*(s2++));
    printf("Text 1: %s\n",text1);
    printf("Text 2: %s",text2);
    return 0;
}
