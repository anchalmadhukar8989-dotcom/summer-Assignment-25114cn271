//WRITE A PROGRAM TO DEVELOP COMPLETE MINI PROJECT USING ARRAYS, STRINGS AND FUNCTIONS.//
#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure for student
struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student students[MAX];
int count = 0;

// Function declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main() {
    int choice;

    do {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

// Add Student
void addStudent() {
    if(count == MAX) {
        printf("Database Full!\n");
        return;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &students[count].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);

    count++;
    printf("Student Added Successfully!\n");
}

// Display Students
void displayStudents() {
    int i;

    if(count == 0) {
        printf("No Records Found!\n");
        return;
    }

    printf("\nRoll\tName\t\tMarks\n");
    printf("-------------------------------------\n");

    for(i = 0; i < count; i++) {
        printf("%d\t%-15s%.2f\n",
               students[i].roll,
               students[i].name,
               students[i].marks);
    }
}

// Search Student
void searchStudent() {
    int roll, i, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++) {
        if(students[i].roll == roll) {
            printf("\nStudent Found\n");
            printf("Roll : %d\n", students[i].roll);
            printf("Name : %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student Not Found!\n");
}

// Update Student
void updateStudent() {
    int roll, i, found = 0;

    printf("Enter Roll Number to Update: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++) {
        if(students[i].roll == roll) {

            printf("Enter New Name: ");
            scanf(" %[^\n]", students[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);

            printf("Record Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student Not Found!\n");
}

// Delete Student
void deleteStudent() {
    int roll, i, j, found = 0;

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++) {
        if(students[i].roll == roll) {

            for(j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }

            count--;
            found = 1;
            printf("Record Deleted Successfully!\n");
            break;
        }
    }

    if(!found)
        printf("Student Not Found!\n");
}
