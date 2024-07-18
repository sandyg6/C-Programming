#include <stdio.h>

int main() {
    char str[100], word[100];
    printf("Enter a string:");
    gets(str);
    printf("Enter a word to find:");
    gets(word);
    int i=0;int found =0, j;
    while(str[i]!='\0'){
        if(str[i]==word[0]){
            j=0;
            found =1;
            while(word[j]!='\0'){
                if(str[i+j]!=word[j]){
                    found =0;
                    break;
                }
                j++;
            }
        }
        if(found ==1){
            break;
        }
        i++;
    }
    
    if(found==1){
        printf("Found");
    }
    else{
        printf("Not Found");
    }
    return 0;
}
