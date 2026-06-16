//WRITE A PROGRAM TO FIND PAIR WITH GIVEN SUM.//
#include<stdio.h>
int main(){
    int n, sum;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum: ");
    scanf("%d", &sum);
    printf("The pairs with given sum are: ");
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d, %d) ", arr[i], arr[j]);
            }
        }
    }
    return 0;
}