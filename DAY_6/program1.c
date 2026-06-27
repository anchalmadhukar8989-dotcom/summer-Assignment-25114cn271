//WRITE A PROGRAM TO CONVERT DECIMAL TO BINARY.//
#include<stdio.h>
int main(){
    int num, binaryNum[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while(num > 0){
        binaryNum[i] = num % 2;
        num /= 2;
        i++;
    }
    printf("Binary representation: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", binaryNum[j]);
    }
    return 0;
}