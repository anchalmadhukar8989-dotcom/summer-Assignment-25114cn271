//WRITE A PROGRAM TO FIND x^n WITHOUT POW().//
#include<stdio.h>
int main(){
    double x, result = 1.0;
    int n;
    printf("Enter a number (x): ");
    scanf("%lf", &x);
    printf("Enter an exponent (n): ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        result *= x;
    }
    printf("%.2lf^%d = %.2lf", x, n, result);
    return 0;
}