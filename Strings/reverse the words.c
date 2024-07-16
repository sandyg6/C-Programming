#include <stdio.h>
#define size 100
int main() {
    char str[size], rev[size];
    printf("Enter a string: ");
    fgets(str, size, stdin);
    int start, end,len, index, i;
    len =0; index=0;
    while(str[len]!='\0')len++;
    start = len - 1;
    end = len -1;
    while(start>0){
        if(str[start] == ' '){
            i = start+1;
            while(i<=end){
                rev[index] = str[i];
                i++;
                index++;
            }
            rev[index++] = ' ';
            end = start-1;
        }
        start--;
    }
    for(int i=0;i<=end;i++){
        rev[index] = str[i];
        index++;
    }
    rev[index] = '\0';
    printf("%s", rev);

    return 0;
}
