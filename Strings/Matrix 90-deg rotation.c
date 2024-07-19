#include<stdio.h>
int main(){
    char mat[50][50];
    int n;
    printf("Enter the number of rows/columns: ");
    scanf("%d",&n);
    printf("Enter the values of matrix: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Clockwise 90-deg rotation \n");
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
    
    printf("Anticlockwise 90-deg rotation \n");
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
}
