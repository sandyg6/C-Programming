#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]",str);
    int i =0;
    while(str[i]!='\0'){
        if(str[i] == ' '){
            str[i] = '$';
        }
        i++;
    }
    printf("%s",str);
    return 0;
}
