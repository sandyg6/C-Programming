#include <stdio.h>
#include<string.h>

void toRemove(char* str, char* word){
    int i,j;
    int found =0;
    int slen, wlen;
    slen = strlen(str);
    wlen = strlen(word);
    for(i=0;i<slen;i++){
        found =1;
        for(j=0;j<wlen;j++){
            if(str[i+j]!=word[j]){
                found = 0;
                break;
            }
        }
        if(found==1){
            for(j=i;j<=slen-wlen;j++){
                str[j]=str[j+wlen];
            }
            break;
        }
    }
    
}

int main() {
    char str[100], word[100];
    printf("Enter a string:");
    gets(str);
    printf("Enter a word to remove:");
    gets(word);
    toRemove(str,word);
    puts(str);
    return 0;
}

