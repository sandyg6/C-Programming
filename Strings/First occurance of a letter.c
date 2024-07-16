#include <stdio.h>
#define size 100

int IndexOf(char *str, char letter);

int main() {
    char str[size];
    printf("Enter a string: ");
    fgets(str, size, stdin);
    printf("Enter the charater to find: ");
    char toFind;
    scanf("%c", &toFind);
    int index = IndexOf(str, toFind);
    if(index == -1){
        printf("Not found");
    }
    else
    printf("%d", index);

    return 0;
}

int IndexOf(char *str, char letter){
    int i =0;
    while(str[i]!='\0'){
        if(str[i] == letter){
            return i;
        }
        i++;
    }
    return -1;
}
