
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student students[MAX];
int count = 0;

void addStudent() {
    if (count >= MAX) {
        printf("Student limit reached!\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &students[count].roll);

    printf("Enter name: ");
    scanf(" %49[^\n]", students[count].name);

    printf("Enter marks: ");
    scanf("%f", &students[count].marks);

    count++;
    printf("Student added successfully!\n");
}

void displayStudents() {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\nRoll: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

void searchStudent() {
    int roll;

    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("Student found: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }

    printf("Student not found.\n");
}

void calculateAverage() {
    if (count == 0) {
        printf("No students available.\n");
        return;
    }

    float total = 0;

    for (int i = 0; i < count; i++) {
        total += students[i].marks;
    }

    printf("Average marks: %.2f\n", total / count);
}

void saveToFile() {
    FILE *fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(fp, "%d,%s,%.2f\n",
                students[i].roll,
                students[i].name,
                students[i].marks);
    }

    fclose(fp);
    printf("Records saved to students.txt\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Calculate Average\n");
        printf("5. Save Records\n");
        printf("0. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                calculateAverage();
                break;
            case 5:
                saveToFile();
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}
