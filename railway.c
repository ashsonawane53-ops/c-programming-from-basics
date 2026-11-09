#include <stdio.h>

struct Passenger
{
    int seatNumber;
    char name[50];
    int age;
};

int main()
{
    struct Passenger p[10];
    int booked[10] = {0};
    int choice, seat, i;

    do
    {
        printf("\n===== RAILWAY RESERVATION SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View All Bookings\n");
        printf("3. Cancel Ticket\n");
        printf("4. Check Available Seats\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter seat number (1-10): ");
                scanf("%d", &seat);

                if(seat < 1 || seat > 10)
                {
                    printf("Invalid seat number!\n");
                }
                else if(booked[seat - 1] == 1)
                {
                    printf("Seat already booked!\n");
                }
                else
                {
                    p[seat - 1].seatNumber = seat;

                    printf("Enter passenger name: ");
                    scanf(" %[^\n]", p[seat - 1].name);

                    printf("Enter passenger age: ");
                    scanf("%d", &p[seat - 1].age);

                    if(p[seat - 1].age <= 0)
                    {
                        printf("Invalid age!\n");
                    }
                    else
                    {
                        booked[seat - 1] = 1;
                        printf("Ticket booked successfully!\n");
                    }
                }
                break;

            case 2:
                for(i = 0; i < 10; i++)
                {
                    if(booked[i] == 1)
                    {
                        printf("\nSeat Number: %d", p[i].seatNumber);
                        printf("\nPassenger: %s", p[i].name);
                        printf("\nAge: %d\n", p[i].age);
                    }
                }
                break;

            case 3:
                printf("Enter seat number to cancel: ");
                scanf("%d", &seat);

                if(seat >= 1 && seat <= 10 && booked[seat - 1] == 1)
                {
                    booked[seat - 1] = 0;
                    printf("Ticket cancelled successfully!\n");
                }
                else
                {
                    printf("Invalid seat or no booking found!\n");
                }
                break;

            case 4:
                printf("\nAvailable Seats:\n");

                for(i = 0; i < 10; i++)
                {
                    if(booked[i] == 0)
                    {
                        printf("%d ", i + 1);
                    }
                }
                printf("\n");
                break;

            case 5:
                printf("Thank you for using Railway Reservation System!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}
