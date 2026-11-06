
#include <stdio.h>

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        printf("\n===== WELCOME TO ATM =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Your Balance: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if(amount > 0) {
                    balance += amount;
                    printf("Money Deposited Successfully!\n");
                } else {
                    printf("Invalid Amount!\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if(amount <= 0) {
                    printf("Invalid Amount!\n");
                }
                else if(amount > balance) {
                    printf("Insufficient Balance!\n");
                }
                else {
                    balance -= amount;
                    printf("Please Collect Your Cash!\n");
                }
                break;

            case 4:
                printf("Thank You for Using Our ATM!\n");
                break;

            default:
                printf("Invalid Choice! Try Again.\n");
        }

    } while(choice != 4);

    return 0;
}
