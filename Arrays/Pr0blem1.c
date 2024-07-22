#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char arr[2][100];
    for(int i=0;i<2;i++){
        scanf("%s",arr[i]);
    }
    int len1 = strlen(arr[0]);
    int len2 = strlen(arr[1]);
    if(len1 != len2){
        return -1;
    }
    int freq[100] = {0};
    int k=0;
    for(k=0;k<len1;k++){
        if(arr[0][k] != arr[1][k]){
            freq[k] = 1;
        }
    }
    freq[len1] = '\0';
    
    int result = 0;
    int p=0;
    for(int l=len1-1;l>=0;l--){
        result = freq[l]*(pow(2,p))+ result;
        p++;
    }
    printf("%d\n",result);
    
}
