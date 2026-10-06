#include <stdio.h>

int main(){
    float marks;
    printf("enter your marks :");
    scanf("%f",&marks);

    if(marks >= 90 && marks <= 100)
    {
        printf("A grade");
    }
    else if(marks >=80 && marks <= 90)
    {
        printf("B grade");
    }
    else if(marks >=70 && marks <= 80)
    {
        printf("C grade");
    }
    else if(marks >=60 && marks <= 70)
    {
        printf("D grade");
    }
    else if(marks >=50 && marks <= 60)
    {
        printf("E grade");
    }
    else 
    {
        printf("Fail");
    }
    return 0;
}