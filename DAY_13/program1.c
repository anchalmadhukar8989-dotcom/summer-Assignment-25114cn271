//WRITE A PROGRAM TO INPUT AND DISPLAY ARRAY.//
#include<stdio.h>
int main(){
    int arr[10],n;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the elements of array are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
