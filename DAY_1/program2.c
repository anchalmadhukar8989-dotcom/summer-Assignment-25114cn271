//WRITE A PROGRAM TO PRINT MULTIPLICATION TABLE OF A GIVEN NUMBER.//
#include<stdio.h>
int main(){
    int num,i;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}