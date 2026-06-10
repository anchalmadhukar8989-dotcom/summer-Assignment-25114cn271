//WRITE A PROGRAM TO PRINT REVERSE PYRAMID.//
#include<stdio.h>
int main(){

    int rows,i,j;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--){
        //print spaces
        for(j=1;j<=rows-i;j++){
            printf(" ");
        }
        //print stars
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}