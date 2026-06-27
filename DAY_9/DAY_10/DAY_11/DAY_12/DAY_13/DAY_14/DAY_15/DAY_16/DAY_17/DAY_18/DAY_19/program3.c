//WRITE A PROGRAM TO TRANSPOSE A MATRIX.//
#include<stdio.h>
int main(){
    int a[10][10],transpose[10][10],r,c,i,j;
    printf("enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("enter the elements of matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //transposing the matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            transpose[j][i]=a[i][j];
        }
    }
    printf("transpose of the matrix is: \n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}