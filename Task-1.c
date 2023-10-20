#include <stdio.h>
#include <string.h>

struct RegistrationInfo
{
    char regUserName[20];
    char regUserEmail[15];
    char regUserPassword[20];
};

struct LoginInfo
{
    char loginUserName[20];
    char loginUserPassword[20];
};

int main()
{
    struct RegistrationInfo regInfo;
    puts("Registration Form");
    printf("Enter your Username: ");
    gets(regInfo.regUserName); // Note: This is for demonstration purposes, not recommended in real code
    printf("Enter your Email: ");
    gets(regInfo.regUserEmail); // Note: This is for demonstration purposes, not recommended in real code
    printf("Enter your Password: ");
    gets(regInfo.regUserPassword); // Note: This is for demonstration purposes, not recommended in real code

    struct LoginInfo loginInfo;
    puts("\nLogin Form");
    printf("Enter your Username: ");
    gets(loginInfo.loginUserName); // Note: This is for demonstration purposes, not recommended in real code
    printf("Enter your Password: ");
    gets(loginInfo.loginUserPassword); // Note: This is for demonstration purposes, not recommended in real code

    if (strcmp(regInfo.regUserName, loginInfo.loginUserName) == 0 &&
        strcmp(regInfo.regUserPassword, loginInfo.loginUserPassword) == 0)
        printf("Login completed\n");
    else
        printf("Login failed, try again\n");

    return 0;
}
