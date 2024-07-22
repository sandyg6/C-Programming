#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len = strlen(str);
    int i=0, space = 0;
    while(str[i]!='\0'){
        if(str[i] == ' '){
            space++;
        }
        i++;
    }
    int newlen = len + space * 2; 
    char arr[newlen+1];
    int j=0;i=0;
    while(str[i]!='\0'){
        if(str[i] == ' '){
            arr[j] = '%';
            arr[j+1]= '2';
            arr[j+2]= '0';
            j=j+3;
        }
        else {
            arr[j] = str[i];
            j++;
        }
        i++;
    }
    arr[j]='\0';
    printf("%s\n", arr);
    printf("%d",newlen);
    return 0;
}
