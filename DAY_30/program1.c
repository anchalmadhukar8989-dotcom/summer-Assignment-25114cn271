//WRITE A PROGRAM TO CREATE STUDENT RECORD SYSTEM USING ARRAYS AND STRINGS.//
#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define NAME_LENGTH 50
struct Student {
    int id;
    char name[NAME_LENGTH];
    float marks;
};
int main() {
    struct Student students[MAX_STUDENTS];
    int choice, count = 0, i;

    do {
        printf("\nMenu:\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < MAX_STUDENTS) {
                    printf("Enter student ID: ");
                    scanf("%d", &students[count].id);
                    printf("Enter student name: ");
                    scanf("%s", students[count].name);
                    printf("Enter student marks: ");
                    scanf("%f", &students[count].marks);
                    count++;
                } else {
                    printf("Student record is full.\n");
                }
                break;
            case 2:
                printf("Student List:\n");
                for(i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Marks: %.2f\n",
                           students[i].id, students[i].name,
                           students[i].marks);
                }
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 3);

    return 0;
}