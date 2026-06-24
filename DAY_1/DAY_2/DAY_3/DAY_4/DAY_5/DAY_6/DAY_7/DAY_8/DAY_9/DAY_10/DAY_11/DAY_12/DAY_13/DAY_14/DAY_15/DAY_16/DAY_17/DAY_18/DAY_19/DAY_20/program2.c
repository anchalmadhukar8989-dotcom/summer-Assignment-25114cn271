//WRITE A PROGRAM TO CHECK SYMMETRIC MATRIX.//
#include<stdio.h>
int main(){
    int n, i, j, flag = 1;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the elements of the matrix: ");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(a[i][j] != a[j][i]){
                flag = 0;
                break;
            }
        }
        if(flag == 0){
            break;
        }
    }
    if(flag == 1){
        printf("The matrix is symmetric.");
    }
    else{
        printf("The matrix is not symmetric.");
    }
    return 0;
}