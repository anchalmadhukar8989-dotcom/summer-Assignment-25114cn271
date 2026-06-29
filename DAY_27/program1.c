//WRITE A PROGRAM TO CREATE STUDENT RECORD MANAGEMENT SYSTEM.//
#include <stdio.h>
struct student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct student students[100];
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
                if(count < 100) {
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