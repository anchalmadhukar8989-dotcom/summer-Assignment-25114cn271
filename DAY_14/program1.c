//WRITE A PROGRAM TO LINEAR SEARCH.//
#include<stdio.h>
int main(){
    int arr[10],n,key,i,found=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the key to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("key found at position %d",i+1);
    }
    else{
        printf("key not found");
    }
    return 0;
}