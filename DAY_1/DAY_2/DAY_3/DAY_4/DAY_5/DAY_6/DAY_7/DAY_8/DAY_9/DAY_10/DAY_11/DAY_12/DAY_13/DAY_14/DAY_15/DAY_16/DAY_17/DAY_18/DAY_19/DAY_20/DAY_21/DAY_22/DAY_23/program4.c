//WRITE A PROGRAM TO FIND MAXIMUM OCCURING CHARACTER.//
#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0}; // Array to store frequency of each character
    int i, maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    gets(str);

    // Calculate frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find maximum occurring character
    for(i = 0; i < 256; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character: '%c' with frequency: %d\n", maxChar, maxFreq);
    return 0;
}