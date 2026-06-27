//WRITE A PROGRAM TO FIND GCD OF TWO NUMBERS.//
#include<stdio.h>
int main(){
    int num1, num2, gcd;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    for(int i = 1; i <= num1 && i <= num2; ++i){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d.", num1, num2, gcd);
    return 0;
}