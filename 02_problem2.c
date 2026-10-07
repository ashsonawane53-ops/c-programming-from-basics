/*
write a program to determine whether a student has passed or failed.
to pass, a student requires a total od 40% and 
at least 33% in each subject.
assume there are three subjects and take the marks 
as input from the user.
*/

#include <stdio.h>

int main(){
    float marks1, marks2, marks3, marks4;
    printf("enter your math marks in percentage :");
    scanf("%f",&marks1);
    printf("enter your biology marks in percentage :");
    scanf("%f",&marks2);
    printf("enter your physics marks in percentage :");
    scanf("%f",&marks3);
    printf("enter your total marks in percentage :");
    scanf("%f",& marks4);

    if( marks4 >= 40 && marks1 >= 33 && marks2 >= 33 && marks3 >= 33)
    {
        printf("youre pass ");
    }
    else
    {
        printf("youre fail");
    }
    return 0;
}