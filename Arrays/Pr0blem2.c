#include<stdio.h>

int main(){
    int money;
    scanf("%d",&money);
    int values[] = {500,100,50,20,10,5,2,1};
    int count[8] = {0};
    int i=0;
    while(money>0){
        while(money >= values[i]){
            count[i]++;
            money = money - values[i];
        }
        i++;
    }
    for(int j=0;j<8;j++){
        printf("%d:%d\n",values[j],count[j]);
    }
    return 0;
}
