
#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 2.50;
    }
    else if (units <= 200) {
        bill = (100 * 2.50) + (units - 100) * 4.00;
    }
    else if (units <= 300) {
        bill = (100 * 2.50) + (100 * 4.00) + (units - 200) * 5.50;
    }
    else {
        bill = (100 * 2.50) + (100 * 4.00) +
               (100 * 5.50) + (units - 300) * 7.00;
    }

    printf("\nTotal Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}
