//WRITE A PROGRAM TO PRINT FACTORS OF A NUMBER.//
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}