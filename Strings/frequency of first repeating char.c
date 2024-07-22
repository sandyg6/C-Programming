#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len = strlen(str);
    int count=1;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count!=1){
            printf("'%c' occurs %d times", str[i], count);
            break;
        }
    }
    return 0;
}