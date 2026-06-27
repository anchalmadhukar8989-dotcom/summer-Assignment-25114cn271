//WRITE A PROGRAM TO RECURSIVE REVERSE NUMBER.//
#include<stdio.h>
int reverseNumber(int n){
    static int rev = 0;
    if(n == 0){
        return rev;
    }
    rev = rev * 10 + n % 10;
    return reverseNumber(n / 10);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d", num, reverseNumber(num));
    return 0;
}