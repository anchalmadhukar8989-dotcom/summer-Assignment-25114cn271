//WRITE A PROGRAM TO WRITE FUNCTION FOR PERFECT NUMBER.//
#include<stdio.h>
int perfect(int num);
    int main(){
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    if(number<=0){
        printf("not perfect\n");
        return 0;

    }
    if(perfect(number)){
        printf("perfect\n");
    }else{
        printf("not perfect\n");
    }
    return 0;
}
int perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum==n;
}