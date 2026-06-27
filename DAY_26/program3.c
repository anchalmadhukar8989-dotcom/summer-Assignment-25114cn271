//WRITE A PROGRAM TO CREATE ATM SIMULATION.//
#include<stdio.h>
int main(){
    int choice;
    float balance=10000,amount;
    printf("Welcome to the ATM Simulation!\n");
    printf("Your current balance is: %.2f\n", balance);
    printf("Enter your choice (1-Deposit, 2-Withdraw): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Deposit successful. Your new balance is: %.2f\n", balance);
            break;
        case 2:
            printf("Enter the amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= balance) {
                balance -= amount;
                printf("Withdrawal successful. Your new balance is: %.2f\n", balance);
            } else {
                printf("Insufficient funds.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}