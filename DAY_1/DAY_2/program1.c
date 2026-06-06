//WRITE A PROGRAM TO FIND SUM OF DIGITS OF A NUMBER//
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    printf("sum of digits=%d",sum);
    return 0;
}