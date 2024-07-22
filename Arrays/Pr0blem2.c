#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int money[n];
    for(int m=0;m<n;m++){
        scanf("%d",&money[m]);
    }
    int values[] = {500,100,50,20,10,5,2,1};
    int count[8] = {0};
    for(int l=0;l<n;l++){
        int i=0;
        while(money[l]>0){
            while(money[l] >= values[i]){
                count[i]++;
                money[l] = money[l] - values[i];
            }
            i++;
        }
        for(int j=0;j<8;j++){
            printf("%d:%d\n",values[j],count[j]);
        }
        printf("\n");
    }
    return 0;
}
