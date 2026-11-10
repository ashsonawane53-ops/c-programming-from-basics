#include <stdio.h>

int main()
{
    FILE *fp;
    int choice;
    char item[50];
    float amount, total;

    do
    {
        printf("\n===== PERSONAL EXPENSE TRACKER =====\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Calculate Total Expense\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                fp = fopen("expenses.txt", "a");

                if(fp == NULL)
                {
                    printf("File opening failed!\n");
                    break;
                }

                printf("Enter expense name: ");
                scanf(" %[^\n]", item);

                printf("Enter amount: ");
                scanf("%f", &amount);

                if(amount <= 0)
                {
                    printf("Invalid amount!\n");
                }
                else
                {
                    fprintf(fp, "%s %.2f\n", item, amount);
                    printf("Expense saved successfully!\n");
                }

                fclose(fp);
                break;

            case 2:
                fp = fopen("expenses.txt", "r");

                if(fp == NULL)
                {
                    printf("No expenses found!\n");
                    break;
                }

                printf("\nYour Expenses:\n");

                while(fscanf(fp, " %49[^0-9\n] %f", item, &amount) == 2)
                {
                    printf("%s : Rs. %.2f\n", item, amount);
                }

                fclose(fp);
                break;

            case 3:
                fp = fopen("expenses.txt", "r");

                if(fp == NULL)
                {
                    printf("No expenses found!\n");
                    break;
                }

                total = 0;

                while(fscanf(fp, " %49[^0-9\n] %f", item, &amount) == 2)
                {
                    total += amount;
                }

                printf("Total Expenses = Rs. %.2f\n", total);

                fclose(fp);
                break;

            case 4:
                printf("Thank you for using Expense Tracker!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}