#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book books[50];
    int choice, count = 0, i, searchId, found;

    do
    {
        printf("\n===== LIBRARY MANAGEMENT =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 50)
                {
                    printf("Enter Book ID: ");
                    scanf("%d", &books[count].id);

                    printf("Enter Book Name: ");
                    scanf(" %[^\n]", books[count].name);

                    printf("Enter Author Name: ");
                    scanf(" %[^\n]", books[count].author);

                    count++;

                    printf("Book Added Successfully!\n");
                }
                else
                {
                    printf("Library is Full!\n");
                }
                break;

            case 2:
                if(count == 0)
                {
                    printf("No Books Available!\n");
                }
                else
                {
                    for(i = 0; i < count; i++)
                    {
                        printf("\nBook ID: %d", books[i].id);
                        printf("\nBook Name: %s", books[i].name);
                        printf("\nAuthor: %s\n", books[i].author);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(books[i].id == searchId)
                    {
                        printf("Book Found!\n");
                        printf("Name: %s\n", books[i].name);
                        printf("Author: %s\n", books[i].author);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");

                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}