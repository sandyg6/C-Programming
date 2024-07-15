// Online C compiler to run C program online
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
    int i=0;
    while(str1[i] == str2[i]){
        if(str1[i] == '\0' && str2[i] == '\0'){
            break;
        }
        i++;
    }
    return str1[i]-str2[i];
}
