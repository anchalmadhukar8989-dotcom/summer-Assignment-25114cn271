//WRITE A PROGRAM TO FIND MISSING NUMBER IN AN ARRAY.//
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int total = (n+1)*(n+2)/2;
    printf("The missing number is: %d", total-sum);
    return 0;
}