#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]%c",str);
    int len = strlen(str);
    char newstr[len];
    int j=0;
    for(int i=0;i<len;i++){
        if(i%2==0){
            newstr[j] = str[i+1];
            newstr[j+1] = str[i];
            j=j+2;
        }
    }
    newstr[len] = '\0';
    puts(newstr);
}
