//WRITE A PROGRAM TO PRINT CHARACTER PYRAMID.//
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //Print ascending characters
        for(j=0;j<i;j++)
        {
            printf("%c",'A'+j);
        }
        //Print descending characters
        for(j=i-2;j>=0;j--)
        {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}