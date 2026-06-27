//WRITE A PROGRAM TO COUNT EVEN AND ODD ELEMENTS.//
#include<stdio.h>
int main(){
    int arr[10],n,even=0,odd=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("the number of even elements is: %d\n",even);
    printf("the number of odd elements is: %d\n",odd);
    return 0;
}