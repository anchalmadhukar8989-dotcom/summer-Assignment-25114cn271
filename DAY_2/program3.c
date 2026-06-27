//WRITE A PROGRAM TO FIND PRODUCT OF DIGITS//
#include<stdio.h>
int main(){
    int n,product=1;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
        product*=n%10;
        n/=10;
    }
    printf("product of digits=%d",product);
    return 0;
}