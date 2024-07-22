#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        int c=0;
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j]){
                c++;
            }
        }
        if(c==0){
            printf("%c",str[i]);
            break;
        }
    }
    return 0;
}
