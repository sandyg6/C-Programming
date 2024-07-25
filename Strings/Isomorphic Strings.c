#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool areIsomorphic(char *str1, char * str2){
    if(strlen(str1) != strlen(str2)){
        return false;
    }
    int map1[256]={0},map2[256]={0};
    for(int i=0;i<strlen(str1);i++){
        if(map1[(int)str1[i]] != map2[(int)str2[i]]){
            return false;
        }
        map1[(int)str1[i]]++;
        map2[(int)str2[i]]++;
    }
    return true;
}
int main(){
    char str1[]="aba";
    char str2[]="xxy";
    if(areIsomorphic(str1,str2)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
