//WRITE A PROGRAM TO CREATE CONTACT MANAGEMENT SYSTEM.//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char name[100];
    char phone[20];
    char email[100];
};
int main() {
    struct Contact contacts[100];
    int count = 0;
    int choice;

    do {
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("Enter name: ");
                    scanf(" %[^\n]s", contacts[count].name);
                    printf("Enter phone number: ");
                    scanf(" %[^\n]s", contacts[count].phone);
                    printf("Enter email: ");
                    scanf(" %[^\n]s", contacts[count].email);
                    count++;
                } else {
                    printf("Maximum number of contacts reached!\n");
                }
                break;
            case 2:
                printf("\nList of Contacts:\n");
                for (int i = 0; i < count; i++) {
                    printf("Name: %s, Phone: %s, Email: %s\n",
                           contacts[i].name, contacts[i].phone, contacts[i].email);
                }
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}