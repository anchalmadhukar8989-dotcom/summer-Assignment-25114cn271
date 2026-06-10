//WRITE A PROGRAM TO PRINT STAR PYRAMID.//
#include<stdio.h>
int main()
{
    int rows,i,j;
    printf("enter numbers of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        
    
    //print spaces
    for(j=1;j<=rows-1;j++)
    printf(" ");
    //print stars
    for(j=1;j<=(2*i-1);j++){
        printf("*");
    }
    printf("\n");}
    return 0;

}