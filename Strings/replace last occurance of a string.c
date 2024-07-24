#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    scanf("%[^\n]%c",str);
    char toReplace;
    scanf("%c ",&toReplace);
    char ReplaceWith;
    scanf("%c",&ReplaceWith);
    int len= strlen(str);
    int index;
    for(int i=0;i<len;i++){
        if(str[i] == toReplace){
            index = i;
        }
    }
    str[index] = ReplaceWith;
    puts(str);
    return 0;
}
