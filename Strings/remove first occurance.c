#include <stdio.h>
#include<string.h>
#define size 100
#define chars 255

int IndexOf(char *str, char letter);

int main() {
    char str[size];
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to remove: ");
    char ToRemove = getchar();
    int i=0;
    int len = strlen(str);
    while(i<len && str[i] != ToRemove)
        i++;
    while(i<len){
            str[i] = str[i+1];
            i++;
    }
    printf("%s",str);
    return 0;
}
