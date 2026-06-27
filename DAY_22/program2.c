//WRITE A PROGRAM TO COUNT WORDS IN A SENTENCE.//
#include<stdio.h>
int main(){
    char str[100];
    int i, wordCount = 0;

    printf("Enter a sentence: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0'){
            wordCount++;
        }
    }

    // Count the last word if the string is not empty
    if(i > 0 && str[i-1] != ' '){
        wordCount++;
    }

    printf("Number of words in the sentence: %d", wordCount);
    return 0;
}