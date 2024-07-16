#include <stdio.h>
#define size 100
#define chars 255

int IndexOf(char *str, char letter);

int main() {
    char str[size];
    printf("Enter a string: ");
    fgets(str, size, stdin);
    int freq[chars];
    for(int i=0;i<chars;i++){
        freq[i]=0;
    }
    int i=0;
    while(str[i]!='\0'){
        int ascii = (int)str[i];
        freq[ascii]++;
        i++;
    }
    int max =0;
    for(int i=0;i<chars;i++){
        if(freq[i]>freq[max]){
            max =i;
        }
    }
    printf("%c - %d", max, freq[max]);
    
}

