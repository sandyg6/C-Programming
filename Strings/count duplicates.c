#include <stdio.h>
#include<string.h>
#define size 100
#define chars 255

int IndexOf(char *str, char letter);

int main() {
    char str[size];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    int index =0;int max=0;int count;
    for(int i=0;i<len;i++){
        count=1;
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j]){
                count++;
                if(count>=max){
                    max = count;
                    index = i;
                }
            }
        }
    }
    printf("%c,%d", str[index], max);
    return 0;
}
