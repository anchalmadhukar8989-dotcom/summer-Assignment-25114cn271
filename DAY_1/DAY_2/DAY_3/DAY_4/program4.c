//WRITE A PROGRAM TP PRINT ARMSTRONG NUMBERS IN A RANGE.//
#include<stdio.h>
#include<math.h>
int main(){
    int lower, upper, num, originalNum, remainder, n;
    float result;
    printf("Enter the lower and upper limit: ");
    scanf("%d %d", &lower, &upper);
    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for(num = lower; num <= upper; num++){
        originalNum = num;
        n = 0;
        result = 0.0;
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }
        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }
        if ((int)result == num) {
            printf("%d ", num);
        }
    }
    return 0;
}