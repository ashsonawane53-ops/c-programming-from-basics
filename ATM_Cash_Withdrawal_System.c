#include <stdio.h>

int main()
{
    int balance = 50000;
    int amount;
    int notes500, notes200, notes100;
    int choice;

    do
    {
        printf("\n===== ATM CASH SYSTEM =====\n");
        printf("1. Check ATM Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nAvailable Cash: Rs. %d\n", balance);
                break;

            case 2:
                printf("\nEnter withdrawal amount: ");
                scanf("%d", &amount);

                if(amount <= 0 || amount % 100 != 0)
                {
                    printf("Enter a valid amount in multiples of 100!\n");
                }
                else if(amount > balance)
                {
                    printf("Insufficient ATM balance!\n");
                }
                else
                {
                    notes500 = amount / 500;
                    amount = amount % 500;

                    notes200 = amount / 200;
                    amount = amount % 200;

                    notes100 = amount / 100;

                    balance -= (notes500 * 500 +
                                notes200 * 200 +
                                notes100 * 100);

                    printf("\n===== CASH DETAILS =====\n");
                    printf("500 Notes: %d\n", notes500);
                    printf("200 Notes: %d\n", notes200);
                    printf("100 Notes: %d\n", notes100);

                    printf("Cash Withdrawn Successfully!\n");
                    printf("Remaining ATM Balance: Rs. %d\n", balance);
                }
                break;

            case 3:
                printf("\nThank you for using ATM!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}