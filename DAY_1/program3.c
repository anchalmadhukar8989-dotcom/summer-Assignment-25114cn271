#include<stdio.h>
int main(){
    int n,i;
    long long factorial = 1;
     
    printf("enter a number:");
    scanf("%d",&n);
    for(i = 1;i <=n; i++){
        factorial =factorial*i;
    }
    printf("factorial of %d = %lld",n,factorial);
    return 0;
}
