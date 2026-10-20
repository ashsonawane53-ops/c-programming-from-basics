#include <stdio.h>

int prime(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n;
    printf("enter a number :");
    scanf("%d", &n);

    if (prime(n))
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}