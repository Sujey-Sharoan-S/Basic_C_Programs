#include<stdio.h>

#define username "Admin"
#define password "Admin@123"

int main()
{
    char Username[20];
    char Password[20];

    printf("Enter username: ");
    scanf("%s", Username);

    printf("Enter password: ");
    scanf("%s", Password);

    if(strcmp(Username, username) == 0 && strcmp(Password, password) == 0)
    {
        printf("Login successful!\n");
    }
    else
    {
        printf("Invalid username or password.\n");
    }

    return 0;
}