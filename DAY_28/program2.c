//WRITE A PROGRAM TO CREATE BANK ACCOUNT SYSTEM.//
#include <stdio.h>
#include <string.h>

struct BankAccount {
    int accountNumber;
    char accountHolderName[100];
    float balance;
};

int main() {
    struct BankAccount accounts[100];
    int count = 0;
    int choice;

    do {
        printf("\nBank Account System\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("Enter account number: ");
                    scanf("%d", &accounts[count].accountNumber);
                    printf("Enter account holder name: ");
                    scanf(" %[^\n]s", accounts[count].accountHolderName);
                    printf("Enter initial balance: ");
                    scanf("%f", &accounts[count].balance);
                    count++;
                } else {
                    printf("Maximum number of accounts reached!\n");
                }
                break;
            case 2:
                printf("\nList of Accounts:\n");
                for (int i = 0; i < count; i++) {
                    printf("Account Number: %d, Name: %s, Balance: %.2f\n",
                           accounts[i].accountNumber, accounts[i].accountHolderName, accounts[i].balance);
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
