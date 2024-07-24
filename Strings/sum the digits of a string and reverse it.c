#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char str[100];
    scanf("%[^\n]%c",str);
    int len = strlen(str);
    int sum=0;
    for(int i=0;i<len;i++){
        if(str[i]>='0' && str[i]<='9'){
            // printf("%c",str[i]);
            sum+= str[i] - '0';
        }
    }
    printf("%d", sum);
    int n= sum;
    int rev=0;
    int digit = 0;
    while (n != 0) {
        n /= 10;
        digit++;
    }
    // printf("\n%d", digit);
    int div = pow(10,digit);
    // printf("\n%d", div);
    int p=digit;
    for(int j=0;j<digit;j++){
        rev += (sum % 10)*pow(10,p-1);
        sum/=10;
        p--;
    }
    printf("\n%d", rev);
    
}
