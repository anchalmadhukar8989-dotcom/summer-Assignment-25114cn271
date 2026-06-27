//WRITE A PROGRAM TO REVERSE A NUMBER//
#include<stdio.h>
int main(){
    int n,reverse=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
        reverse=reverse*10+n%10;
        n/=10;
    }
    printf("reverse of the number=%d",reverse);
    return 0;
}