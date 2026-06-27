//WRITE A PROGRAM TO FIND SUM AND AVERAGE OF ARRAY.//
#include<stdio.h>
int main(){
    int arr[10],n,sum=0;
    float average;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    average=(float)sum/n;
    printf("the sum of array is: %d\n",sum);
    printf("the average of array is: %.2f\n",average);
    return 0;
}