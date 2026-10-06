/*#include <stdio.h>

int main(){
    int age = 20;
    if (age >= 18){
        printf("You are an adult");
    }
    else if (age >= 13){
        printf("You are a teenager");
    }
    else{
        printf("You are a child");
    }
    return 0;
} */



// using user input

#include <stdio.h>

int main(){
    int number;
    printf("enter a number between 1 and 7 :");
    scanf("%d", &number);
    if (number == 1){
        printf("Monday");
    }
    else if (number == 2){
        printf("Tuesday");
    }
    else if (number == 3){
        printf("Wednesday");
    }
    else if (number == 4){
        printf("Thursday");
    }
    else if (number == 5){
        printf("Friday");
    }
    else if (number == 6){
        printf("Saturday");
    }
    else if (number == 7){
        printf("Sunday");
    }
    else{
        printf("Invalid input");
    }    
    return 0;
}