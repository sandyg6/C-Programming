#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%[^\n]", str);
    int len = strlen(str);
    int alpha[26] = {0};
    int i=0;int index =0;
    while(str[i]!='\0'){
        if(isalpha(str[i])){
            index = toupper(str[i]) - 'A';
            alpha[index]++;
        }
        i++;
    }
    int allalpha = 1;
    for(int i=0;i<26;i++){
        if(alpha[i] == 0){
            allalpha = 0;
            break;
        }
    }
    if(allalpha){
        printf("Present");
    }
    else{
        printf("Not Present");
    }

    return 0;
}
