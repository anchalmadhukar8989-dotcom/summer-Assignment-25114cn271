//WRITE A PROGRAM TO PRINT NUMBER PYRAMID.//
#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //Ascending numbers
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        //Descending numbers
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}