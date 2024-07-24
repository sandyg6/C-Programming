#include <stdio.h>
#include<string.h>

int isprime(int num){
    int n= num/2;
    int c=0;
    for(int i=2;i<n;i++){
        if(num%i == 0){
            c++;
        }
    }
    if(c==0){
        printf("Prime ");
        goto even_odd;
    }
    else{
        goto even_odd;
    }
    even_odd:
    {
        if(num%2==0){
            printf("Even Number");
        }
        else{
            printf("Odd Number");
        }
    };
    return 0;
}
int main() {
    char str[100];
    scanf("%[^\n]%c",str);
    int len= strlen(str);
    int sum = 0;
    for(int i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
         sum++;   
        }
    }
    printf("%d\n", sum);
    isprime(sum);
    return 0;
}
