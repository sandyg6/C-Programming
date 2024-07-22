#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    for(int j=0;j<n;j++){
        while(j%2!=0){
            printf("%s\n",str[j]);
            j++;
        }
    }
    return 0;
}