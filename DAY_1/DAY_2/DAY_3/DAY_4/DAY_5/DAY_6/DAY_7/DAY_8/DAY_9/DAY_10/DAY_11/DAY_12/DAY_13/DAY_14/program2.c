//WRITE A PROGRAM TO FREQUENCY OF AN ELEMENT.//
#include<stdio.h>
int main(){
    int arr[10],n,key,i,count=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the key to find frequency:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    printf("the frequency of %d is: %d",key,count);
    return 0;
}