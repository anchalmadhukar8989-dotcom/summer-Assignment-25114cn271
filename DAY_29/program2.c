//WRITE A PROGRAM TO CREATE MENU-DRIVEN ARRAY OPERATIONS SYSTEM.//
#include <stdio.h>

int main() {
    int choice, size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Display Array\n");
        printf("2. Find Maximum\n");
        printf("3. Find Minimum\n");
        printf("4. Calculate Sum\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Array elements: ");
                for(i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 2:
                {
                    int max = arr[0];
                    for(i = 1; i < size; i++) {
                        if(arr[i] > max) {
                            max = arr[i];
                        }
                    }
                    printf("Maximum element: %d\n", max);
                }
                break;
            case 3:
                {
                    int min = arr[0];
                    for(i = 1; i < size; i++) {
                        if(arr[i] < min) {
                            min = arr[i];
                        }
                    }
                    printf("Minimum element: %d\n", min);
                }
                break;
            case 4:
                {
                    int sum = 0;
                    for(i = 0; i < size; i++) {
                        sum += arr[i];
                    }
                    printf("Sum of elements: %d\n", sum);
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 5);

    return 0;
}