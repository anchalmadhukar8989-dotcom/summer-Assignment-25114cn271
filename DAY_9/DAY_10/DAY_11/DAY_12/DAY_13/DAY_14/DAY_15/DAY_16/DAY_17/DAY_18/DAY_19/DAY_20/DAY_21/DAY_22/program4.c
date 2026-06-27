//WRITE A PROGRAM TO REMOVE SPACES FROM STRING.//
#include <stdio.h>
int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            i--; // Adjust index after removal
        }
    }

    printf("String after removing spaces: %s\n", str);
    return 0;
}
