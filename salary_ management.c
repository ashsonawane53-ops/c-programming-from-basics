#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra, da, pf, netSalary;
};

int main()
{
    struct Employee emp[50];
    int n, i;

    printf("===== EMPLOYEE PAYROLL SYSTEM =====\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    if(n <= 0 || n > 50)
    {
        printf("Invalid number of employees!\n");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        if(emp[i].basicSalary < 0)
        {
            printf("Invalid salary!\n");
            return 0;
        }

        emp[i].hra = emp[i].basicSalary * 0.20;
        emp[i].da = emp[i].basicSalary * 0.10;
        emp[i].pf = emp[i].basicSalary * 0.12;

        emp[i].netSalary = emp[i].basicSalary
                         + emp[i].hra
                         + emp[i].da
                         - emp[i].pf;
    }

    printf("\n===== EMPLOYEE SALARY REPORT =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID: %d", emp[i].id);
        printf("\nEmployee Name: %s", emp[i].name);
        printf("\nBasic Salary: Rs. %.2f", emp[i].basicSalary);
        printf("\nHRA: Rs. %.2f", emp[i].hra);
        printf("\nDA: Rs. %.2f", emp[i].da);
        printf("\nPF: Rs. %.2f", emp[i].pf);
        printf("\nNet Salary: Rs. %.2f\n", emp[i].netSalary);
    }

    return 0;
}