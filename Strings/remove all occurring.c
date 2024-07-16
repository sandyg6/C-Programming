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
    int index = 0;
   for(int i=0;i<len;i++){
       if(str[i]==ToRemove){
           for(int j=i;j<len;j++){
               str[j] = str[j+1];
           }
           len--;
           i--;
       }
   }
    printf("%s",str);
    return 0;
}
