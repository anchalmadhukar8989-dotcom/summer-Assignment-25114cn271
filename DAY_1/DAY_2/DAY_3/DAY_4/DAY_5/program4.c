//WRITE A PROGRAM TO FIND LARGEST PRIME FACTOR.//
#include<stdio.h>
int main(){
    int num, i, maxPrime = -1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }
    for (i = 3; i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }
    if (num > 2) {
        maxPrime = num;
    }
    printf("Largest prime factor: %d", maxPrime);
    return 0;
}