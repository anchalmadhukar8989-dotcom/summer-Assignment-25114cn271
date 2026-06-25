//WRITE A PROGRAM TO CHARACTER FREQUENCY.//
#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0}; // Array to store frequency of each character
    int i;

    printf("Enter a string: ");
    gets(str);

    // Calculate frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Character Frequency:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
