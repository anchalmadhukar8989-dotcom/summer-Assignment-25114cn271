//WRITE A PROGRAM TO FIND DUPLICATES IN AN ARRAY.//
#include<stdio.h>
int main(){
    int arr[10],n,i,j,found=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the duplicates in the array are:");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                found=1;
                break;
            }
        }
    }
    if(found==0){
        printf("no duplicates found");
    }
    return 0;
}