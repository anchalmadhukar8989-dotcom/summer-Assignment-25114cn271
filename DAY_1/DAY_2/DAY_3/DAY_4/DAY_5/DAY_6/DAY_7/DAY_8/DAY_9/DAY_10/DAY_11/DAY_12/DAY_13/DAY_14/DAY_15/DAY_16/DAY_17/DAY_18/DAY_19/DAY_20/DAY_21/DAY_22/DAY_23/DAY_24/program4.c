//WRITE A PROGRAM TO REMOVE DUPLICATE CHARACTERS.//
#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0}; // Array to store frequency of each character
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] == 0) {
            str[j++] = str[i];
            freq[(unsigned char)str[i]]++;
        }
    }
    str[j] = '\0'; // Null-terminate the modified string

    printf("String after removing duplicate characters: %s\n", str);
    return 0;
}