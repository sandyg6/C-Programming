#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len = strlen(str);
    int index = 0;
    int freq[255] = {0};
    for(int i=0;i<len;i++){
        index = (int)str[i];
        freq[index]++;
    }
    int max =0;
    for(int j=0;j<255;j++){
        if(freq[max]<freq[j]){
            max = j;
        }
    }
    printf("'%c' occurs %d times", max, freq[max]);
    return 0;
}