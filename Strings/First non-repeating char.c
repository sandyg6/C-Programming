#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]",str);
    int len = strlen(str);
    int freq[256]={0};
    for(int i=0;str[i];i++){
        freq[str[i]]++;
    }
    for(int z=0;str[z];z++){
        if(freq[str[z]] == 1){
            printf("%c",str[z]);
            break;
        }
    }
    return 0;
}
