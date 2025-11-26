#include <stdio.h>

// Define enum for user roles
enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role currentRole;

    // Example: set role to USER
    currentRole = USER;

    // Display message based on role
    switch (currentRole) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! Please sign up for more features.\n");
            break;
        default:
            printf("Unknown role.\n");
    }

    return 0;
}