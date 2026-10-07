//write a program to find whether a year
//entered by te user is leap year or not

#include <stdio.h>

int main(){
    int year;
    printf("enter a year :");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("your entered year is a leaf year");
    }
    else
    {
        printf("your entered year is not a leaf year");
    }
    return 0;
}