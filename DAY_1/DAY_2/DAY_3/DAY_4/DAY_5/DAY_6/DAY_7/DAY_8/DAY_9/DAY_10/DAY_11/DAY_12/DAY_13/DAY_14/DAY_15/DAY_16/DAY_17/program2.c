//WRITE A PROGRAM TO UNION OF ARRAYS.//
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
    //finding union
    for(i=0;i<n1;i++){
        c[k]=a[i];
        k++;
    }
    for(i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            if(b[i]==a[j]){
                break;
            }
        }
        if(j==n1){
            c[k]=b[i];
            k++;
        }
    }
    printf("union of arrays is: ");
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
    return 0;
}