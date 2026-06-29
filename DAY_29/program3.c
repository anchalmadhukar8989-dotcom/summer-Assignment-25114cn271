//WRITE A PROGRAM TO CREATE MENU-DRIVEN STRING OPERATIONS SYSTEM.//
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], choice;
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    do {
        printf("\nMenu:\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Convert to Lowercase\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice) {
            case '1':
                printf("String: %s", str);
                break;
            case '2':
                len = strlen(str) - 1; // Subtract 1 to exclude newline character
                printf("Length of string: %d\n", len);
                break;
            case '3':
                strupr(str);
                printf("String in uppercase: %s", str);
                break;
            case '4':
                strlwr(str);
                printf("String in lowercase: %s", str);
                break;
            case '5':
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != '5');

    return 0;
}