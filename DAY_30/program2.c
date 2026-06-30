//WRITE A PROGRAM TO CREATE MINI LIBRARY SYSTEM.//
#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 100
#define TITLE_LENGTH 100
struct Book {
    int id;
    char title[TITLE_LENGTH];
    char author[50];
    int year;
};
int main() {
    struct Book books[MAX_BOOKS];
    int choice, count = 0, i;

    do {
        printf("\nMenu:\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < MAX_BOOKS) {
                    printf("Enter book ID: ");
                    scanf("%d", &books[count].id);
                    printf("Enter book title: ");
                    scanf(" %[^\n]", books[count].title); // Read string with spaces
                    printf("Enter book author: ");
                    scanf(" %[^\n]", books[count].author); // Read string with spaces
                    printf("Enter publication year: ");
                    scanf("%d", &books[count].year);
                    count++;
                } else {
                    printf("Book record is full.\n");
                }
                break;
            case 2:
                printf("Book List:\n");
                for(i = 0; i < count; i++) {
                    printf("ID: %d, Title: %s, Author: %s, Year: %d\n",
                           books[i].id, books[i].title,
                           books[i].author, books[i].year);
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