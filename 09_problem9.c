#include <stdio.h>
#include <ctype.h>

int countVowels(char s[]) {
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower((unsigned char)s[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            count++;
        }
    }

    return count;
}

int main() {
    char s[100];

    printf("Enter a word: ");
    scanf("%99s", s);

    printf("Vowels = %d\n", countVowels(s));

    return 0;
}