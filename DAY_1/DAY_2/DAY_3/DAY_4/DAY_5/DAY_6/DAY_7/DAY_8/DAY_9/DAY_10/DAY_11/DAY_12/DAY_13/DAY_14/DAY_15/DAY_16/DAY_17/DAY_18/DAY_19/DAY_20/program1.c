//WRITE A PROGRAM TO MULTIPLY MATRICES.//
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],product[10][10],r1,c1,r2,c2,i,j,k;
    printf("enter the number of rows and columns of first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("enter the number of rows and columns of second matrix: ");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2){
        printf("matrices cannot be multiplied.\n");
        return 0;
    }
    printf("enter the elements of first matrix: ");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix: ");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //multiplying two matrices
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            product[i][j]=0;
            for(k=0;k<c1;k++){
                product[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("product of two matrices is: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}