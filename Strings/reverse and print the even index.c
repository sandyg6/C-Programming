#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]%c",str);
    int len = strlen(str);
    char rev[len], eve[len];
    int index = 0;
    for(int j=len-1;j>=0;--j){
        rev[index] = str[j];
        index++;
    }
    rev[len]= '\0';
    printf("%s\n",rev);
    int ind = 0;
    for(int k=0;k<len;k++){
        if(k%2!=0){
            eve[ind]=rev[k];
            ind++;
        }
    }
    eve[ind]='\0';
    printf("%s",eve);
    
}
