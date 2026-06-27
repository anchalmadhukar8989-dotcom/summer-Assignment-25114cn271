//WRITE A PROGRAM TO FIND LONGEST WORD.//
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char longestWord[100] = "";
    char word[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > strlen(longestWord)) {
                strcpy(longestWord, word);
            }
            j = 0;
        }
    }
    word[j] = '\0';
    if (strlen(word) > strlen(longestWord)) {
        strcpy(longestWord, word);
    }

    printf("Longest word: %s\n", longestWord);
    return 0;
}