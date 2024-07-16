#include <stdio.h>
#define size 100

int IndexOf(char *str, char letter);

int main() {
    char str[size];
    printf("Enter a string: ");
    fgets(str, size, stdin);
    printf("Enter the charater to count: ");
    char toCount = getchar();
    int i=0;
    while(str[i]!='\0'){
        if(str[i] == toCount){
            printf("%d\t",i);
        }
        i++;
    }
}
