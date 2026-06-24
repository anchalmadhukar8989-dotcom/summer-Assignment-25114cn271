//WRITE A PROGRAM TO REVERSE A STRING.//
#include<stdio.h>
int main(){
    char str[100];
    int i, j;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++);
    i--;
    printf("Reversed string is: ");
    for(j = i; j >= 0; j--){
        printf("%c", str[j]);
    }
    return 0;
}