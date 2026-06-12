//WRITE A PROGRAM TO WRITE FUNCTION FOR ARMSTRONG.//
#include<stdio.h>
#include<math.h>

int armstrong(int n){
    int sum=0,temp=n;
    while(temp>0){
        sum+=pow(temp%10,3);
        temp/=10;
    }
    if(sum==n)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(armstrong(n))
        printf("armstrong\n");
    else
        printf("not armstrong\n");
    return 0;
}