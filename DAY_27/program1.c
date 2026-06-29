//WRITE A PROGRAM TO CREATE STUDENT RECORD MANAGEMENT SYSTEM.//
#include <stdio.h>
#include <stdlib.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
inline void addStudent(struct Student *students, int *count) {
    printf("Enter student ID: ");
    scanf("%d", &students[*count].id);
    printf("Enter student name: ");
    scanf("%s", students[*count].name);
    printf("Enter student marks: ");
    scanf("%f", &students[*count].marks);
    (*count)++;
}