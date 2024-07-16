#include <stdio.h>
#include<string.h>
#define size 100
#define chars 255

int IndexOf(char *str, char letter);

int main() {
    char str[size];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    int freq[len];
    for(int f=0;f<len;f++){
        freq[f] = 0;
    }
    int i,j;
    for(i=0;i<len;i++){
        if(freq[i] !=1 && str[i] != ' '){
            for(j =i+1;j<len;j++){
                if(str[i] == str[j]){
                    freq[j] = 1;
                }
            }
        }
        if(freq[i] == 0 || str[i] == ' '){
            printf("%c",str[i]);
        }
    }
    return 0;
}
