
#include <stdio.h>

struct Account {
    char name[50];
    int accountNumber;
    float balance;
};

void checkBalance(struct Account a) {
    printf("\nAccount Holder: %s\n", a.name);
    printf("Account Number: %d\n", a.accountNumber);
    printf("Available Balance: ₹%.2f\n", a.balance);
}

void deposit(struct Account *a) {
    float amount;

    printf("Enter deposit amount: ");
    scanf("%f", &amount);

    if (amount > 0) {
        a->balance += amount;
        printf("Amount deposited successfully!\n");
    } else {
        printf("Invalid amount!\n");
    }
}

void withdraw(struct Account *a) {
    float amount;

    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount!\n");
    } else if (amount > a->balance) {
        printf("Insufficient balance!\n");
    } else {
        a->balance -= amount;
        printf("Withdrawal successful!\n");
    }
}

int main() {
    struct Account account;
    int choice;

    printf("Enter account holder name: ");
    scanf(" %49[^\n]", account.name);

    printf("Enter account number: ");
    scanf("%d", &account.accountNumber);

    printf("Enter opening balance: ");
    scanf("%f", &account.balance);

    if (account.balance < 0) {
        printf("Invalid opening balance!\n");
        return 1;
    }

    do {
        printf("\n====== BANK MANAGEMENT SYSTEM ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(account);
                break;

            case 2:
                deposit(&account);
                break;

            case 3:
                withdraw(&account);
                break;

            case 4:
                printf("Thank you for banking with us!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
