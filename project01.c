#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;


    do {
         printf("guess the number :");
         scanf("%d",&guessed);
         if(guessed>randomnumber){
            printf("lower number please!\n");
         }
         else{
            printf("higher number please!\n");
         }
         no_of_guesses++;

    }while(guessed!=randomnumber);

    printf("you guessed the number in %d guesses", no_of_guesses);
    return 0;
}



