//WRITE A PROGRAM TO RECURSIVE FIBONACCI.//
#include<stdio.h>
int fibonacci(int n){
    if(n == 0){
        return 0;
    } else if(n == 1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci of %d is %d", num, fibonacci(num));
    return 0;
}