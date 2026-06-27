//WRITE A PROGRAM TO CREATE MARKSHEET GENERATION SYSTEM.//
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int id;
    float marks[5];
    float total;
    float average;
};

int main() {
    struct Student students[100];
    int n, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        students[i].total = 0;
        for (j = 0; j < 5; j++) {
            printf("Marks in subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
        students[i].average = students[i].total / 5;
    }

    printf("\nMarkSheet:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("Total Marks: %.2f\n", students[i].total);
        printf("Average Marks: %.2f\n", students[i].average);
    }

    return 0;
}