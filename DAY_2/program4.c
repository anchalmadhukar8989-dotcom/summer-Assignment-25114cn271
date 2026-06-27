//WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS PALINDROME//
#include<stdio.h>
int main(){
    int n,reverse=0,temp;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        reverse=reverse*10+n%10;
        n/=10;
    }
    if(temp==reverse){
        printf("the number is palindrome");
    }
    else{
        printf("the number is not palindrome");
    }
    return 0;
}