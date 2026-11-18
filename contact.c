#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact contacts[100];
    int choice, count = 0, i, found;
    char searchName[50];

    do
    {
        printf("\n===== CONTACT BOOK =====\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 100)
                {
                    printf("Enter Name: ");
                    scanf(" %[^\n]", contacts[count].name);

                    printf("Enter Phone Number: ");
                    scanf("%14s", contacts[count].phone);

                    printf("Enter Email: ");
                    scanf("%49s", contacts[count].email);

                    count++;

                    printf("\nContact Added Successfully!\n");
                }
                else
                {
                    printf("Contact Book is Full!\n");
                }
                break;

            case 2:
                if(count == 0)
                {
                    printf("No Contacts Available!\n");
                }

                for(i = 0; i < count; i++)
                {
                    printf("\nName: %s", contacts[i].name);
                    printf("\nPhone: %s", contacts[i].phone);
                    printf("\nEmail: %s\n", contacts[i].email);
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                scanf(" %[^\n]", searchName);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(strcmp(contacts[i].name, searchName) == 0)
                    {
                        printf("\nContact Found!");
                        printf("\nName: %s", contacts[i].name);
                        printf("\nPhone: %s", contacts[i].phone);
                        printf("\nEmail: %s\n", contacts[i].email);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Contact Not Found!\n");

                break;

            case 4:
                printf("Enter Name to Delete: ");
                scanf(" %[^\n]", searchName);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(strcmp(contacts[i].name, searchName) == 0)
                    {
                        for(int j = i; j < count - 1; j++)
                        {
                            contacts[j] = contacts[j + 1];
                        }

                        count--;
                        found = 1;

                        printf("Contact Deleted Successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                    printf("Contact Not Found!\n");

                break;

            case 5:
                printf("Thank You for Using Contact Book!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}