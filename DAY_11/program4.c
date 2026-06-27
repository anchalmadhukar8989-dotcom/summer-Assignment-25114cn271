//WRITE A PROGRAM TO WRITE FUNCTION TO FIND FACTORIAL.//
#include<stdio.h>
//Function to find factorial of a number
int factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("factorial=%d\n",factorial(num));
    return 0;
}