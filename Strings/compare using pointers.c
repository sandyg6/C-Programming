#include <stdio.h>
#include<string.h>
#define size 100

int compare(char *str1, char *str2);
int main() {
    char text1[size];
    printf("Enter text1: ");
    gets(text1);
    char text2[size];
    printf("Enter text2: ");
    gets(text2);
    int res = compare(text1, text2);
    if (res ==0){
        printf("Both are equal");
    }
    else if(res<0){
        printf("text 1 is smaller than text 2");
    }
    else{
        printf("text 2 is smaller than text 1");
    }
    return 0;
}

int compare(char *str1, char *str2){
    while((*str1 && *str2) && (*str1 == *str2)){
        *str1++;
        *str2++;
    }
    return *str1-*str2;
}
