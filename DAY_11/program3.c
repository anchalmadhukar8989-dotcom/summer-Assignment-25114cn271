//WRITE A PROGRAM TO WRITE FUNCTION TO CHECK PRIME.//
#include<stdio.h>
//Function to check if a number is prime
int isPrime(int n){
    if(n<=1)
        return 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(isPrime(num))
        printf("%d is prime\n",num);
    else
        printf("%d is not prime\n",num);
    return 0;
}
