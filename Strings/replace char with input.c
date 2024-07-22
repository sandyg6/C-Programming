#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%[^\n]%c",str);
    char toReplace;
    scanf("%c ",&toReplace);
    char replaceWith;
    scanf("%c",&replaceWith);
    int len = strlen(str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i] == toReplace){
            str[i] = replaceWith;
        }
        i++;
    }
    printf("%s",str);
    return 0;
}
