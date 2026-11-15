#include <stdio.h>

struct Customer
{
    int accountNumber;
    char name[50];
    float balance;
};

void deposit(struct Customer *c, float amount)
{
    if(amount > 0)
    {
        c->balance += amount;
        printf("\nAmount deposited successfully!");
    }
    else
    {
        printf("\nInvalid amount!");
    }
}

void withdraw(struct Customer *c, float amount)
{
    if(amount > 0 && amount <= c->balance)
    {
        c->balance -= amount;
        printf("\nWithdrawal successful!");
    }
    else
    {
        printf("\nInsufficient balance or invalid amount!");
    }
}

void display(struct Customer c)
{
    printf("\n\n===== ACCOUNT DETAILS =====");
    printf("\nAccount Number: %d", c.accountNumber);
    printf("\nCustomer Name: %s", c.name);
    printf("\nAvailable Balance: Rs. %.2f\n", c.balance);
}

int main()
{
    struct Customer c;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &c.accountNumber);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", c.name);

    printf("Enter Opening Balance: ");
    scanf("%f", &c.balance);

    if(c.balance < 0)
    {
        printf("Invalid opening balance!");
        return 0;
    }

    do
    {
        printf("\n\n===== BANK MANAGEMENT SYSTEM =====");
        printf("\n1. Deposit Money");
        printf("\n2. Withdraw Money");
        printf("\n3. Check Balance");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                deposit(&c, amount);
                break;

            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                withdraw(&c, amount);
                break;

            case 3:
                display(c);
                break;

            case 4:
                printf("\nThank you for banking with us!");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while(choice != 4);

    return 0;
}