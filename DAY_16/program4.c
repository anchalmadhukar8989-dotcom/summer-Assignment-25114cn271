//WRITE A PROGRAM TO REMOVE DUPLICATES FROM AN ARRAY.//
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
    int new_size=0;
    for(int i=0; i<n; i++){
        int is_duplicate=0;
        for(int j=0; j<new_size; j++){
            if(arr[i]==arr[j]){
                is_duplicate=1;
                break;
            }
        }
        if(!is_duplicate){
            arr[new_size]=arr[i];
            new_size++;
        }
    }
    printf("The array after removing duplicates is: ");
    for(int i=0; i<new_size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}