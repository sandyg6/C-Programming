#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len = strlen(str);
    int i=0;
    while(str[i]!='\0'){
        if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))){
            printf("%c",str[i]);
        }
        i++;
    }
    return 0;
}
