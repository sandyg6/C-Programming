#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], str1[50];
    printf("Enter the string: ");
    gets(str);
    printf("Enter the string to insert: ");
    gets(str1);
    int pos;
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    int n=strlen(str), len=1, x = 0, j = 0;
    if(n<pos){
        printf("Invalid position");
    }
    else{
        char cat_string[100];
        int i=0;
        for(i=0;i<pos;i++){
            cat_string[i] = str[i];
        }
        for(j=0;j<strlen(str1);j++){
            cat_string[i] = str1[j];
            i++;
        }
        for(int k=pos;k<n;k++){
            cat_string[i] = str[k];
            i++;
        }
        printf("The new string is %s",cat_string);
    }
    }
