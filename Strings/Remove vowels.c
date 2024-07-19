#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c",str);
    int i=0;
    while(str[i]!='\0'){
        
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i'|| str[i]== 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i]=='U'){
            for(int j=i;str[j] = str [j+1];j++);
        }
        i++;
    }
    
    printf("%s",str);
    return 0;
}
