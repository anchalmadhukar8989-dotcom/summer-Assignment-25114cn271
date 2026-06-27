//WRITE A PROGRAM TO MOVES ZEROES TO END.//
#include<stdio.h>
int main(){
    int arr[]={0,10,0,20,30,0,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[count++]=arr[i];
        }
    }
    while(count<n){
        arr[count++]=0;
    }
    printf("the array after moving zeroes to end is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}