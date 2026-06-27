//WRITE A PROGRAM TO ADD MATRICES.//
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],sum[10][10],r,c,i,j;
    printf("enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("enter the elements of first matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //adding two matrices
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of two matrices is: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}