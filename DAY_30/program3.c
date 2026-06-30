//WRITE A PROGRAM TO CREATE MINI EMPLOYEE MANAGEMENT SYSTEM.//
#include <stdio.h>
#include <string.h>
#define MAX_EMPLOYEES 100
#define NAME_LENGTH 50
struct Employee {
    int id;
    char name[NAME_LENGTH];
    float salary;
};
int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int choice, count = 0, i;

    do {
        printf("\nMenu:\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < MAX_EMPLOYEES) {
                    printf("Enter employee ID: ");
                    scanf("%d", &employees[count].id);
                    printf("Enter employee name: ");
                    scanf("%s", employees[count].name);
                    printf("Enter employee salary: ");
                    scanf("%f", &employees[count].salary);
                    count++;
                } else {
                    printf("Employee record is full.\n");
                }
                break;
            case 2:
                printf("Employee List:\n");
                for(i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Salary: %.2f\n",
                           employees[i].id, employees[i].name,
                           employees[i].salary);
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