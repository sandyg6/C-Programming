#include<stdio.h>
int main(){
    // first matrix
    printf("Enter rows and columns for matrix 1:\n");
    int arows, acolumns;
    scanf("%d %d", &arows,&acolumns);
    int a[arows][acolumns];
    printf("Enter Values for matrix 1:\n");
    for(int i=0;i<arows;i++){
        for(int j=0;j<acolumns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // Second matrix
    printf("Enter rows and columns for matrix 2:\n");
    int brows, bcolumns;
    scanf("%d %d", &brows,&bcolumns);
    int b[brows][bcolumns];
    printf("Enter Values for matrix 2:\n");
    for(int i=0;i<brows;i++){
        for(int j=0;j<bcolumns;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //Resultant matrix
    int product[arows][bcolumns];
    int sum = 0;
    if(acolumns != brows){
        return 0;
    }

    for(int j=0;j<arows;j++){ //first matrix
        for(int k=0;k<bcolumns;k++){ //second matrix
            for(int l=0;l<brows;l++){ //rows of both
                sum += a[j][l] * b[l][k];
            }
            product[j][k] = sum;
            sum=0;
        }
    }
        
        printf("The resultant matrix is:\n");
        for(int i=0;i<arows;i++){ 
            for(int j=0;j<bcolumns;j++){ 
                printf("%d\t",product[i][j]);
            }
            printf("\n");
        }
    
}
