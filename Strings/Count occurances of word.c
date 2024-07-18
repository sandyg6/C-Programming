#include <stdio.h>
#include<string.h>
int main() {
    char str[100], word[100];
    printf("Enter a string:");
    gets(str);
    printf("Enter a word to count:");
    gets(word);
    int index=-1;
    int i,found=0,count=0;
    int slen = strlen(str);
    int wlen = strlen(word);
    int len = slen-wlen;
    for(i=0;i<=len;i++){
        found=1;
        for(int j=0;j<wlen;j++){
            if(str[i+j]!=word[j]){
                found=0;
                break;
            }
        }
        if(found == 1){
            index = i;
            count+=1;
        }
    } 
   printf("Found %d times",count);
    return 0;
}
