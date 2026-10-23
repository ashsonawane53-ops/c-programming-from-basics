#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int isStrong(int n) {
    int temp = n, sum = 0;

    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;
    printf("enter a number :");
    scanf("%d", &n);

    if (n >= 0 && isStrong(n))
        printf("Strong number");
    else
        printf("Not a Strong number");

    return 0;
}