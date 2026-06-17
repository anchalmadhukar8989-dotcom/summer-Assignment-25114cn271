//WRITE A PROGRAM  TO FIND COMMON ELEMENTS.//
#include<stdio.h>
int main(){
    int a[50],b[50],c[100];
    int n1,n2,i,j,k=0;
    printf("enter the size of first array: ");
    scanf("%d",&n1);
    printf("enter the elements of first array: ");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the size of second array: ");
    scanf("%d",&n2);
    printf("enter the elements of second array: ");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    //finding common elements
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                c[k]=a[i];
                k++;
                break;
            }
        }
    }
    printf("common elements are: ");
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
    return 0;
}