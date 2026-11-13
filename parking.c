#include <stdio.h>

int main()
{
    int choice, vehicle, hours;
    int cars = 0, bikes = 0;
    float bill, totalCollection = 0;

    do
    {
        printf("\n===== PARKING MANAGEMENT SYSTEM =====\n");
        printf("1. Park a Vehicle\n");
        printf("2. Remove a Vehicle\n");
        printf("3. Available Parking Slots\n");
        printf("4. Total Collection\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n1. Car\n2. Bike\n");
                printf("Select vehicle: ");
                scanf("%d", &vehicle);

                if(vehicle == 1 && cars < 5)
                {
                    cars++;
                    printf("Car parked successfully!\n");
                }
                else if(vehicle == 2 && bikes < 10)
                {
                    bikes++;
                    printf("Bike parked successfully!\n");
                }
                else
                {
                    printf("Invalid vehicle or parking full!\n");
                }
                break;

            case 2:
                printf("\n1. Car\n2. Bike\n");
                printf("Select vehicle: ");
                scanf("%d", &vehicle);

                printf("Enter parking hours: ");
                scanf("%d", &hours);

                if(hours <= 0)
                {
                    printf("Invalid hours!\n");
                    break;
                }

                if(vehicle == 1 && cars > 0)
                {
                    bill = hours * 50;
                    cars--;
                }
                else if(vehicle == 2 && bikes > 0)
                {
                    bill = hours * 20;
                    bikes--;
                }
                else
                {
                    printf("No such parked vehicle found!\n");
                    break;
                }

                totalCollection += bill;

                printf("Parking Fee = Rs. %.2f\n", bill);
                printf("Vehicle removed successfully!\n");
                break;

            case 3:
                printf("\nAvailable Car Slots: %d\n", 5 - cars);
                printf("Available Bike Slots: %d\n", 10 - bikes);
                break;

            case 4:
                printf("Total Collection = Rs. %.2f\n",
                       totalCollection);
                break;

            case 5:
                printf("Thank you! Have a nice day.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}