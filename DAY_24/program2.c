//WRITE A PROGRAM TO COMPRESS A STRING.//
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char compressed[200];
    int i, j = 0;
    int count;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i += count) {
        count = 1;
        while (str[i] == str[i + count]) {
            count++;
        }
        compressed[j++] = str[i];
        if (count > 1) {
            int temp = count;
            int digits = 0;
            while (temp > 0) {
                temp /= 10;
                digits++;
            }
            temp = count;
            for (int k = digits - 1; k >= 0; k--) {
                compressed[j + k] = temp % 10 + '0';
                temp /= 10;
            }
            j += digits;
        }
    }
    compressed[j] = '\0';

    printf("Compressed string: %s\n", compressed);
    return 0;
}