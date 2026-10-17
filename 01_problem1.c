#include <stdio.h>

double average(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

int main(void) {
    double a, b, c;
    char choice;

    do {
        printf("This program calculates the average of three numbers\n");
        printf("enter a: ");
        scanf("%lf", &a);

        printf("enter b: ");
        scanf("%lf", &b);

        printf("enter c: ");
        scanf("%lf", &c);

        printf("The average of a, b, c is %.2f\n", average(a, b, c));

        printf("Do you want to try more? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}