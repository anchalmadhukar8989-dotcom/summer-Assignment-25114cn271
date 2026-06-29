//WRITE A PROGRAM TO CREATE INVENTORY MANAGEMENT SYSTEM.//
#include <stdio.h>
struct product {
    int id;
    char name[50];
    float price;
    int quantity;
};
int main() {
    struct product products[100];
    int choice, count = 0, i;

    do {
        printf("\nMenu:\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 100) {
                    printf("Enter product ID: ");
                    scanf("%d", &products[count].id);
                    printf("Enter product name: ");
                    scanf("%s", products[count].name);
                    printf("Enter product price: ");
                    scanf("%f", &products[count].price);
                    printf("Enter product quantity: ");
                    scanf("%d", &products[count].quantity);
                    count++;
                } else {
                    printf("Inventory is full.\n");
                }
                break;
            case 2:
                printf("Product List:\n");
                for(i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Price: %.2f, Quantity: %d\n",
                           products[i].id, products[i].name,
                           products[i].price, products[i].quantity);
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