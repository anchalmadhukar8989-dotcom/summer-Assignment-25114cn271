//WRITE A PROGRAM TO FIND MAXIMUM FREQUENCY OF AN ELEMENT.//
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
    int max_freq=0;
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max_freq){
            max_freq=count;
        }
    }
    printf("The maximum frequency of an element is: %d", max_freq);
    return 0;
}