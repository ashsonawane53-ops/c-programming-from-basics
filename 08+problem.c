#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("enter a valid number");
    scanf("%d", &n);

    if (n < 0 || n > 40) {
        printf("Enter a number from 0 to 40");
        return 0;
    }

    printf("%d", fibonacci(n));

    return 0;
}