#include <stdio.h>
#include<string.h>

void toRemoveSpace(char* str){
    int i=0;
    int index = 0;
    while(str[i]==' ' || str[i]=='\t' || str[i]=='\n'){
        index++;
    }
    if(index!=0){
        i=0;
        while(str[index+i]!='\0'){
            str[index] =str[index+i];
        }
        str[i] = '\0';
    }
}
int main() {
    char str[100];
    printf("Enter a string:");
    gets(str);
    toRemoveSpace(str);
    printf("%s",str);
    return 0;
}

