#include <stdio.h>

int seats[5][5] = {0};

void displaySeats()
{
    int i, j;

    printf("\n===== SEAT LAYOUT =====\n");
    printf("0 = Available | X = Booked\n\n");

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(seats[i][j] == 0)
                printf(" 0 ");
            else
                printf(" X ");
        }
        printf("\n");
    }
}

int main()
{
    int choice, row, col, i, j;
    int tickets = 0;
    float total = 0;

    do
    {
        printf("\n===== MOVIE TICKET SYSTEM =====\n");
        printf("1. View Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. View Total Collection\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displaySeats();
                break;

            case 2:
                displaySeats();

                printf("\nEnter row (1-5): ");
                scanf("%d", &row);

                printf("Enter column (1-5): ");
                scanf("%d", &col);

                if(row < 1 || row > 5 || col < 1 || col > 5)
                {
                    printf("Invalid seat number!\n");
                }
                else if(seats[row-1][col-1] == 1)
                {
                    printf("Seat already booked!\n");
                }
                else
                {
                    seats[row-1][col-1] = 1;
                    tickets++;
                    total += 150;

                    printf("Ticket booked successfully!\n");
                    printf("Ticket Price: Rs. 150\n");
                }
                break;

            case 3:
                printf("Enter row: ");
                scanf("%d", &row);

                printf("Enter column: ");
                scanf("%d", &col);

                if(row >= 1 && row <= 5 && col >= 1 && col <= 5)
                {
                    if(seats[row-1][col-1] == 1)
                    {
                        seats[row-1][col-1] = 0;
                        tickets--;
                        total -= 150;

                        printf("Ticket cancelled successfully!\n");
                    }
                    else
                    {
                        printf("Seat is not booked!\n");
                    }
                }
                else
                {
                    printf("Invalid seat number!\n");
                }
                break;

            case 4:
                printf("\nTotal Tickets Booked: %d\n", tickets);
                printf("Total Collection: Rs. %.2f\n", total);
                break;

            case 5:
                printf("Thank you for visiting!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}