//WRITE A PROGRAM TO CREATE QUIZ APPLICATION.//
#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("Welcome to the Quiz Application!\n");

    // Question 1
    printf("Question 1: What is the capital of France?\n");
    printf("A) London\nB) Berlin\nC) Paris\nD) Madrid\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &answer);

    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect.\n");
    }

    // Question 2
    printf("\nQuestion 2: What is 2 + 2?\n");
    printf("A) 3\nB) 4\nC) 5\nD) 6\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &answer);

    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect.\n");
    }

    // Display final score
    printf("\nYour final score is: %d/2\n", score);

    return 0;
}