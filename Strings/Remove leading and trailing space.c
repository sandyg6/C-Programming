#include <stdio.h>
#include<string.h>

void removeSpace(char* str);

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    removeSpace(str);
    puts(str);
    return 0;
}

void removeSpace(char* str){
    int index,i;
    
    index =0;
    while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n'){
            index++;
    }
    i=0;
    while(str[i+index]!= '\0'){
        str[i] = str[i+index];
        i++;
    }
    str[i] = '\0';
    
    index = -1;
    i=0;
    while(str[i]!='\0'){
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n'){
            index = i;
        }
        i++;
    }
    str[index+1]='\0';
}
