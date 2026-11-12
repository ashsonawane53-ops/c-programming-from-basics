#include <stdio.h>

int main()
{
    int choice, quantity;
    float total = 0, price, discount, finalBill;

    do
    {
        printf("\n===== ONLINE SHOPPING SYSTEM =====\n");
        printf("1. Laptop       - Rs. 50000\n");
        printf("2. Mobile       - Rs. 20000\n");
        printf("3. Headphones   - Rs. 2000\n");
        printf("4. Keyboard     - Rs. 1000\n");
        printf("5. Checkout\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if(quantity <= 0)
            {
                printf("Invalid quantity!\n");
                continue;
            }

            switch(choice)
            {
                case 1:
                    price = 50000;
                    break;

                case 2:
                    price = 20000;
                    break;

                case 3:
                    price = 2000;
                    break;

                case 4:
                    price = 1000;
                    break;
            }

            total = total + (price * quantity);

            printf("Product added successfully!\n");
        }
        else if(choice == 5)
        {
            if(total == 0)
            {
                printf("Your cart is empty!\n");
                continue;
            }

            printf("\n===== FINAL BILL =====\n");
            printf("Total Amount: Rs. %.2f\n", total);

            if(total >= 50000)
                discount = total * 0.10;
            else if(total >= 20000)
                discount = total * 0.05;
            else
                discount = 0;

            finalBill = total - discount;

            printf("Discount: Rs. %.2f\n", discount);
            printf("Final Amount: Rs. %.2f\n", finalBill);
            printf("\nThank you for shopping!\n");
        }
        else
        {
            printf("Invalid choice!\n");
        }

    } while(choice != 5 || total == 0);

    return 0;
}