#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len = strlen(str);
    int freq[len];
    for(int k=0;k<len;k++){
        freq[k]=0;
    }
    int count, sum =0 , sqrt;
    for(int i=0;i<len-1;i++){
        count = 1;
        if(str[i]==str[i+1]){
            count++;
        }
        freq[i]=count;
    }
    for(int j=0;j<len-1;j++){
        printf("%d",freq[j]);
        sum += freq[j];
    }
    sqrt = sum*sum;
    printf("\n%d",sqrt);
}