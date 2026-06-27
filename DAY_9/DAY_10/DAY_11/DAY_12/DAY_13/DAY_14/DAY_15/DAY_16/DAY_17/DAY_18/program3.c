//WRITE A PROGRAM TO BINARY SEARCH.//
#include<stdio.h>
int main(){
    int a[50],n,i,j,temp,low,high,mid,key;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            printf("element found at position %d",mid+1);
            break;
        }
        else if(a[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(low>high){
        printf("element not found");
    }
    return 0;
}