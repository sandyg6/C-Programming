#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    char vowels[11] = "aeiouAEIOU";
    scanf("%[^\n]%c",str);
    int len= strlen(str);
    int newstr[100] = {0};
    for(int i=0;i<len;i++){
        for(int j=0;j<11;j++){
            if(str[i] == vowels[j]){
               newstr[i] = 1;
            }
        }
    }
    for(int i=0;i<len;i++){
        // printf("%d",newstr[i]);
        if(newstr[i]==0){
            printf("%c",str[i]);
        }
    }
    return 0;
}
