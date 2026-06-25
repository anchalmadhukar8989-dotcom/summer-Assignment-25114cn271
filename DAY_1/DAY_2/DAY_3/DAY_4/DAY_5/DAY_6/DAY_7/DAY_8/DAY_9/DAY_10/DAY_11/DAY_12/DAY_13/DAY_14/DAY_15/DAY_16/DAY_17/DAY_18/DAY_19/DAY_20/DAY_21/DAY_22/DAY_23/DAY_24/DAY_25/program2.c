//WRITE A PROGRAM TO FIND COMMON CHARACTERS IN STRINGS.//
#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Calculate frequency of each character in both strings
    for(i = 0; str1[i] != '\0'; i++) {
        freq1[(unsigned char)str1[i]]++;
    }
    for(i = 0; str2[i] != '\0'; i++) {
        freq2[(unsigned char)str2[i]]++;
    }

    printf("Common characters: ");
    for(i = 0; i < 256; i++) {
        if(freq1[i] > 0 && freq2[i] > 0) {
            printf("%c ", (char)i);
        }
    }
    printf("\n");

    return 0;
}