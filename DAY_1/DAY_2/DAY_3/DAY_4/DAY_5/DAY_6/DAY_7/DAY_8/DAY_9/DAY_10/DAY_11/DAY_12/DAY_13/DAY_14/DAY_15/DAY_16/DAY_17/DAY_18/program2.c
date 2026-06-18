//WRITE A PROGRAM TO SELECTION SORT.//
#include<stdio.h>
int main(){
    int a[50],n,i,j,temp,min;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //selection sort
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}