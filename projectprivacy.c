
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[100];
    int key, choice;

    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a message: ");
    scanf(" %[^\n]", text);

    printf("Enter key (1-25): ");
    scanf("%d", &key);

    key = key % 26;

    for (int i = 0; text[i] != '\0'; i++) {
        if (isupper(text[i])) {
            if (choice == 1)
                text[i] = (text[i] - 'A' + key) % 26 + 'A';
            else if (choice == 2)
                text[i] = (text[i] - 'A' - key + 26) % 26 + 'A';
        }
        else if (islower(text[i])) {
            if (choice == 1)
                text[i] = (text[i] - 'a' + key) % 26 + 'a';
            else if (choice == 2)
                text[i] = (text[i] - 'a' - key + 26) % 26 + 'a';
        }
    }

    if (choice == 1 || choice == 2)
        printf("Result: %s\n", text);
    else
        printf("Invalid choice!\n");

    return 0;
}
