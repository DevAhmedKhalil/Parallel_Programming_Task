#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User {
    char username[20];
    char password[20];
    union {
        int status;
        char status_string[4];
    } status;
};

struct User users[10];
int userCount = 0;

void addUser(char *username, char *password);
void registerUser();
int login(char *username, char *password);

int main() {
    registerUser();

    char inputUsername[20];
    char inputPassword[20];

    printf("Please enter your username: ");
    scanf("%s", inputUsername);

    printf("Enter password: ");
    scanf("%s", inputPassword);

    if (login(inputUsername, inputPassword) == 1) {
        printf("Login successful.\n");
    } else {
        printf("Invalid username or password, or account is inactive.\n");
    }

    return 0;
}

void addUser(char *username, char *password) {
    if (userCount >= 10) {
        printf("Maximum user limit reached.\n");
        return;
    }

    strcpy(users[userCount].username, username);
    strcpy(users[userCount].password, password);
    userCount++;
}

void registerUser() {
    char username[20];
    char password[20];
    char statusString[4];

    printf("Enter a username for registration: ");
    scanf("%s", username);

    printf("Enter a password: ");
    scanf("%s", password);

    printf("Enter 'true' or '1' to activate the account, or 'false' or '0' to deactivate it: ");
    scanf("%s", statusString);

    if (strcmp(statusString, "true") == 0 || strcmp(statusString, "1") == 0) {
        users[userCount].status.status = 1;
    } else if (strcmp(statusString, "false") == 0 || strcmp(statusString, "0") == 0) {
        users[userCount].status.status = 0;
    } else {
        printf("Invalid status value.\n");
        return;
    }

    addUser(username, password);
}

int login(char *username, char *password) {
    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0 && users[i].status.status == 1) {
            return 1;
        }
    }
    return 0;
}
