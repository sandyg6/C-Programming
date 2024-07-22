#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[n][100];
    char digit[3];
    for(int z=0;z<n;z++){
        scanf("%s",str[z]);
    }
    int count = 0;
    while(n){
        digit[0] = str[n][11];
        digit[1] = str[n][12];
        digit[2] = '\0';
        int age = atoi(digit);
        if(age > 60){
            count++;
        }
        n--;
    }
    printf("%d",count);
    return 0;
}


/*

FIRST 10 -  PHONE NUMBER 
NEXT 1 GENDER
NEXT 2 AGE
NEXT 2 SEAT ALLOTMENT
*/

/* Sample test cases
8464738908F5922
8576432145M6811
8576432145M1823
8576432145M3411
8576432145M7811
8576432145M9811
*/