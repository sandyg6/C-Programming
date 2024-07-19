#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]",str);
    int i =0;
    while(str[i]!='\0'){
        if(str[i]>='0' && str[i]<='9'){
            printf("%c",str[i]);
        }
        i++;
    }
    return 0;
}
