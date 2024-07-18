#include <stdio.h>
#include<string.h>

void romen(int num, char* result){
    int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* value[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    
    int i=0;
    result[i] ='\0';
    while(num>0){
    while(num>=numbers[i]){
        strcat(result, value[i]);
        num-=numbers[i];
    }
    i++;
    }
}

int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    char result[100];
    romen(num, result);
    printf("The roman value is ");
    puts(result);
    return 0;
}
