#include <stdio.h>
#include <string.h>
int main() {
    // Stored username & password
    char username[20] = "admin";
    char password[20] = "764320";

    // Variables for user input
    char inputUser[20], inputPass[20];

    // Take username
    printf("Enter username: ");
    scanf("%19s", inputUser);

    // Take password
    printf("Enter password: ");
    scanf("%19s", inputPass);

    // Check match
    if (strcmp(username, inputUser) == 0 && strcmp(password, inputPass) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }

    return 0;
}
