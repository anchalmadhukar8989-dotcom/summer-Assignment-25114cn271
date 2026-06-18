//WRITE A PROGRAM TO BUBBLE SORT.//
#include<stdio.h>
int main(){
    int a[50],n,i,j,temp;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //bubble sort
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}