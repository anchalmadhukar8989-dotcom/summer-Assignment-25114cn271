//write a program to find column-wise sum.//
#include<stdio.h>
int main(){
    int n, m, i, j, sum;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter the elements of the matrix: ");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Column-wise sums are: ");
    for(j = 0; j < m; j++){
        sum = 0;
        for(i = 0; i < n; i++){
            sum += a[i][j];
        }
        printf("%d ", sum);
    }
    return 0;
}