#include <stdio.h>
#include<string.h>
#define size 100

int main() {
    char str[size], rev[size];
    printf("Enter text: ");
    gets(str);
    int i=0;
    while(str[i]!='\0')i++;
    int len = i;
    int flag = 0;
    int startIndex = 0;
    int EndIndex = len-1;
    while(startIndex <= EndIndex){
        if(str[startIndex] != str[EndIndex]){
            flag = 1;
            break;
        }
        startIndex++;
        EndIndex--;
    }
    if(flag==0)
    printf("Palindromic string.");
    else
    printf("Not a palindromic string.");
}

