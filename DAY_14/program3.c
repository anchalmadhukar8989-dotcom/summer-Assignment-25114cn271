//WRITE A PROGRAM TO SECOND LARGEST ELEMENT.//
#include<stdio.h>
int main(){
    int arr[10],n,i,largest,second_largest;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=second_largest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    printf("the second largest element is: %d",second_largest);
    return 0;
}