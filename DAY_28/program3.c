//WRITE A PROGRAM TO CREATE TICKET BOOKING SYSTEM.//
#include <stdio.h>
#include <string.h>

struct Ticket {
    int ticketId;
    char eventName[100];
    char date[20];
    char location[100];
    float price;
};

int main() {
    struct Ticket tickets[100];
    int count = 0;
    int choice;

    do {
        printf("\nTicket Booking System\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("Enter ticket ID: ");
                    scanf("%d", &tickets[count].ticketId);
                    printf("Enter event name: ");
                    scanf(" %[^\n]s", tickets[count].eventName);
                    printf("Enter date: ");
                    scanf(" %[^\n]s", tickets[count].date);
                    printf("Enter location: ");
                    scanf(" %[^\n]s", tickets[count].location);
                    printf("Enter price: ");
                    scanf("%f", &tickets[count].price);
                    count++;
                } else {
                    printf("Maximum number of tickets reached!\n");
                }
                break;
            case 2:
                printf("\nList of Tickets:\n");
                for (int i = 0; i < count; i++) {
                    printf("Ticket ID: %d, Event: %s, Date: %s, Location: %s, Price: %.2f\n",
                           tickets[i].ticketId, tickets[i].eventName, tickets[i].date, tickets[i].location, tickets[i].price);
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
