#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Division by zero is not allowed\n");
        return 0;
    }
    return (float)a / b;
}

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.Add 2.Subtract 3.Multiply 4.Divide\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("%d\n", add(a, b)); break;
        case 2: printf("%d\n", subtract(a, b)); break;
        case 3: printf("%d\n", multiply(a, b)); break;
        case 4:
            if (b != 0)
                printf("%.2f\n", divide(a, b));
            else
                divide(a, b);
            break;
        default: printf("Invalid choice\n");
    }

    return 0;
}