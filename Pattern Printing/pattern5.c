#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int n,m,e;
scanf("%d", &n);

m = n*2-1;
int arr[m][m];
e=0;
int c=m;
for(;0<n;n--){
    for(int j=c-1;e<=j;j--){
        for(int k=c-1;e<=k;k--){
            arr[j][k]=n;
        }
    }
    c--;e++;
}
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        printf("%d ",arr[i][j]);
    }
    puts("");
}
return 0;
}
