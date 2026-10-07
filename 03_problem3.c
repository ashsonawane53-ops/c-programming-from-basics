/*
calculate income tax paid by an employee to the goverment
as per the slabs mention below:
income tax slab         tax
2.5-5.0 lakh             5%
5.0-10.0 lakh            20%    
above 10.0 lakh           30%
*/

#include <stdio.h>

int main(){
    float income, tax;
    printf("enter your income in lakhs :");
        scanf("%f",&income);
    if(income <= 2.5)
    {
        printf("you dont have to pay tax");
    }
    else if(income>2.5 && income <=5)
    {
        printf("you have to pay 5 percent tax");
    }
    else if(income > 5 && income <=10)
    {
        printf("you have to pay 20 percent tax");
    }
    else 
    {
        printf("you have to pay 30 percent tax");
    }
    return 0;
}