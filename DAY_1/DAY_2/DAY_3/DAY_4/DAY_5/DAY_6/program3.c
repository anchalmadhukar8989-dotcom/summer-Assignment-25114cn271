//WRITE A PROGRAM TO COUNT SET BITS IN A NUMBER.//
#include<stdio.h>
int main(){
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    printf("Number of set bits: %d", count);
    return 0;
}