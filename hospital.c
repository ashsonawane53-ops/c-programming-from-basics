#include <stdio.h>

struct Patient
{
    int id;
    char name[50];
    int age;
    char doctor[50];
    int token;
};

int main()
{
    struct Patient p[50];
    int choice, count = 0, i, search, found;

    do
    {
        printf("\n===== HOSPITAL APPOINTMENT SYSTEM =====\n");
        printf("1. Book Appointment\n");
        printf("2. View Appointments\n");
        printf("3. Search Patient\n");
        printf("4. Total Appointments\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 50)
                {
                    p[count].token = count + 1;

                    printf("Enter Patient ID: ");
                    scanf("%d", &p[count].id);

                    printf("Enter Patient Name: ");
                    scanf(" %[^\n]", p[count].name);

                    printf("Enter Age: ");
                    scanf("%d", &p[count].age);

                    printf("Enter Doctor Name: ");
                    scanf(" %[^\n]", p[count].doctor);

                    printf("\nAppointment Booked Successfully!");
                    printf("\nYour Token Number: %d\n", p[count].token);

                    count++;
                }
                else
                {
                    printf("Appointment Limit Reached!\n");
                }
                break;

            case 2:
                for(i = 0; i < count; i++)
                {
                    printf("\nToken: %d", p[i].token);
                    printf("\nPatient ID: %d", p[i].id);
                    printf("\nName: %s", p[i].name);
                    printf("\nAge: %d", p[i].age);
                    printf("\nDoctor: %s\n", p[i].doctor);
                }
                break;

            case 3:
                printf("Enter Patient ID: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(p[i].id == search)
                    {
                        printf("\nPatient Found!");
                        printf("\nName: %s", p[i].name);
                        printf("\nDoctor: %s\n", p[i].doctor);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Patient Not Found!\n");

                break;

            case 4:
                printf("Total Appointments: %d\n", count);
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}