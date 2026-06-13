//WRITE A PROGRAM TO FIND LARGEST AND SMALLEST ELEMENT.//
#include<stdio.h>
int main(){
    int arr[10],n,largest,smallest;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    smallest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("the largest element is: %d\n",largest);
    printf("the smallest element is: %d\n",smallest);
    return 0;
}