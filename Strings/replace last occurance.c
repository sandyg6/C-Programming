#include <stdio.h>
#include<string.h>
#define size 100

int main() {
    char str[size];
    printf("Enter a string: ");
    fgets(str, size, stdin);
    printf("Enter a character to replace: ");
    char toReplace;
    scanf("%c",&toReplace);
    printf("Enter a character to replace with: ");
    char replaceWith;
    scanf(" %c",&replaceWith);
    
    int len = strlen(str);
    int i=0;
    int lastpos = -1;
        while(str[i]!='\0'){
            if(str[i]==toReplace){
            lastpos = i;
            }
            i++;
        }
        if(lastpos!=-1){
            str[lastpos] = replaceWith;
        }
    
    printf("%s",str);
    return 0;
}
