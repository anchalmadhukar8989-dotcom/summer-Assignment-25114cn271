//WRITE A PROGRAM TO WRITE FUNCTION TO FIND SUM OF TWO NUMBERS.//
#include<stdio.h>
//Function to find sum of two numbers
int sum(int a,int b){
    return a+b;
}
int main(){
    int num1,num2;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("sum=%d\n",sum(num1,num2));
    return 0;
}
