#include <stdio.h>
#include<string.h>
#define size 100

int main() {
    char str[size];
    printf("Enter text: ");
    gets(str);
    char *s = str;
    int vowels, consonents;
    vowels = consonents = 0;
    while(*s){
        if((*s >= 'A' && *s <= 'Z')||(*s >='a' && *s<='z')){
            switch(*s){
                case 'a':
                case 'e':
                case 'o':
                case 'u':
                case 'i':
                case 'A':
                case 'E':
                case 'O':
                case 'I':
                case 'U':
                    vowels++;
                    break;
                default:
                    consonents++;
            }
        }
    s++;
    }
    printf("No. of Vowels: %d\n",vowels);
    printf("No. of Consonents : %d\n", consonents);
}

