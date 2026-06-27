//WRITE A PROGRAM TO FIND nth FIBONACCI TERM.//
#include<stdio.h>
int main(){
    int n, first = 0, second = 1, next;
    printf("Enter the term number: ");
    scanf("%d", &n);
    if(n == 0) {
        printf("The 0th term of the Fibonacci series is: %d", first);
    }
    else if(n == 1) {
        printf("The 1st term of the Fibonacci series is: %d", second);
    }
    else {
        for(int i = 2; i <= n; ++i){
            next = first + second;
            first = second;
            second = next;
        }
        printf("The %dth term of the Fibonacci series is: %d", n, next);
    }
    return 0;
}