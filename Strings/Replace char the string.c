#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]%*c",str);
    
    char toReplace;
    printf("Enter a char to replace: ");
    scanf(" %c", &toReplace);
    char replaceWith;
    printf("Enter a char to replace with: ");
    scanf(" %c", &replaceWith);
    
    int i =0;
    while(str[i]!='\0'){
        if(str[i] == toReplace){
            str[i] = replaceWith;
        }
        i++;
    }
    
    printf("%s",str);
    return 0;
}
