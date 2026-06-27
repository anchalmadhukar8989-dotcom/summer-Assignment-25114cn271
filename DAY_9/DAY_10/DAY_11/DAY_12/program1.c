//WRITE A PROGRAM TO WRITE FUNCTION FOR PALINDROME.//
#include<stdio.h>
#include<string.h>
int palindrome(char str[]){
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i])
            return 0;
    }
    return 1;
}
int main(){
    char str[100];
    printf("enter a string:");
    scanf("%s",str);
    if(palindrome(str))
        printf("palindrome\n");
    else
        printf("not palindrome\n");
    return 0;
}