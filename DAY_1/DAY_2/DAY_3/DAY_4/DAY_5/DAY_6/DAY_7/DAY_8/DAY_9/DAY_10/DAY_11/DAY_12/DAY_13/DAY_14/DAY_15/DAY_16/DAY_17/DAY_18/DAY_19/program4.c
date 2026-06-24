//WRITE A PROGRAM TO FIND DIAGONAL SUM.//
#include<stdio.h>
int main(){
    int a[10][10],r,c,i,j,primary_sum=0,secondary_sum=0;
    printf("enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("enter the elements of matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //finding primary diagonal sum
    for(i=0;i<r;i++){
        primary_sum+=a[i][i];
    }
    //finding secondary diagonal sum
    for(i=0;i<r;i++){
        secondary_sum+=a[i][c-i-1];
    }
    printf("primary diagonal sum is: %d\n",primary_sum);
    printf("secondary diagonal sum is: %d\n",secondary_sum);
    return 0;
}