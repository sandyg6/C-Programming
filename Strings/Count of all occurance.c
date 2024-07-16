#include <stdio.h>
#define size 100

int IndexOf(char *str, char letter);

int main() {
    char str[size];
    printf("Enter a string: ");
    fgets(str, size, stdin);
    printf("Enter the charater to search: ");
    char toSearch = getchar();
    int i=0;
    int count =0;
    while(str[i]!='\0'){
        if(str[i] == toSearch){
            count++;
        }
        i++;
    }
    printf("%d\t",count);
}
