//WRITE A PROGRAM TO CREATE LIBRARY MANAGEMENT SYSTEM.//
#include <stdio.h>
#include<string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
    int year;
};
int main() {
    struct Book books[100];
    int count = 0;
    int choice;

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("Enter book ID: ");
                    scanf("%d", &books[count].id);
                    printf("Enter book title: ");
                    scanf(" %[^\n]s", books[count].title);
                    printf("Enter book author: ");
                    scanf(" %[^\n]s", books[count].author);
                    printf("Enter publication year: ");
                    scanf("%d", &books[count].year);
                    count++;
                } else {
                    printf("Library is full!\n");
                }
                break;
            case 2:
                printf("\nList of Books:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Title: %s, Author: %s, Year: %d\n",
                           books[i].id, books[i].title, books[i].author, books[i].year);
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


