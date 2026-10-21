#include <stdio.h>

long long factorial(int n) {
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("enter a number :");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Enter a number from 0 to 20");
        return 0;
    }

    printf("%lld", factorial(n));

    return 0;
}
