#include <stdio.h>

int calculateTotal(int marks[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += marks[i];
    }

    return total;
}

float calculatePercentage(int total, int n) {
    return (float)total / n;
}

void displayResult(int marks[], int n) {
    int total = calculateTotal(marks, n);
    float percentage = calculatePercentage(total, n);

    printf("\nTotal Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 75)
        printf("Grade: Distinction\n");
    else if (percentage >= 60)
        printf("Grade: First Class\n");
    else if (percentage >= 40)
        printf("Grade: Pass\n");
    else
        printf("Grade: Fail\n");
}

int main() {
    int marks[5];

    printf("Enter marks for 5 subjects (out of 100):\n");

    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks!\n");
            return 1;
        }
    }

    displayResult(marks, 5);

    return 0;
}
