#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len = strlen(str);
    int freq[26] = {0}; 
    int index = 0;
    for(int j=0;j<len;j++){
        index = tolower(str[j]) - 'a';
        freq[index]++;
    }
    int max = 0;
    for(int f=0;f<26;f++){
        if(freq[max] < freq[f]){
            max = f;
        }
    }
    printf("%c",max+'a');
    return 0;
}
