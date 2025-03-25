#include <stdio.h>

int main() {
    int choice;

    printf("Select your BTech branch:\n");
    printf("1. BTech CSE\n");
    printf("2. BTech AIML\n");
    printf("3. BTech ECE\n");
    printf("4. BTech Mechanical\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected BTech CSE.\n");
            break;
        case 2:
            printf("You selected BTech AIML.\n");
            break;
        case 3:
            printf("You selected BTech ECE.\n");
            break;
        case 4:
            printf("You selected BTech Mechanical.\n");
            break;
        default:
            printf("Invalid choice. Please select a valid option (1-4).\n");
    }

    return 0;
}

