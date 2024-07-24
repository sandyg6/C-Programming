#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    scanf("%[^\n]%c",str);
    int len= strlen(str);
    int freq[len];
    for(int i=0;i<len;i++){
        freq[i] = 0;
    }
    for(int j=len-1;j>=0;j--){
        for(int k=j-1;k>=0;k--){
            if(str[j]==str[k]){
                freq[j]++;
            }
        }
    }
    for(int i=0;i<len;i++){
        if(freq[i]==0){
            printf("%c",str[i]);
        }
    }
}
