#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char characters[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz"
    "0123456789"
    "@#$%&*!";

    int length, i, total;
    char password[100];

    total = sizeof(characters) - 1;

    srand(time(NULL));

    printf("===== PASSWORD GENERATOR =====\n");

    printf("Enter password length (1-99): ");
    scanf("%d", &length);

    if(length < 1 || length > 99)
    {
        printf("Invalid password length!");
        return 0;
    }

    for(i = 0; i < length; i++)
    {
        password[i] = characters[rand() % total];
    }

    password[length] = '\0';

    printf("\nYour Generated Password: %s\n", password);

    return 0;
}