//WRITE A PROGRAM TO WRITE FUNCTION TO FIND MAXIMUM.//
#include<stdio.h>
//Function to find maximum of two numbers
int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}
int main(){
    int num1,num2;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("maximum=%d\n",max(num1,num2));
    return 0;
}