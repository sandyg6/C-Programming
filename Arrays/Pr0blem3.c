#include<stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sub[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sub[i]=0;
    }
    for(int j=0;j<n;j++){
        if(arr[j] <= 0){
            printf("Invalid value in the array!!");
            goto out;
        }
        else{
        int k = j+1;
        sub[j]= abs(arr[k] - arr[j]);
        }
    }
    int min = 0;
    for(int l=1;l<n;l++){
        if(sub[min]>sub[l]){
            min = l;
        }
    }
    printf("%d",sub[min]);
    out:
    return 0;
}
