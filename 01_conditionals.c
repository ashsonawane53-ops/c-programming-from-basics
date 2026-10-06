/*#include <stdio.h>

int main(){
    int a  = 10;
    if(a>5){
    printf("your  age is greater than 5\n");
    printf("then print if stetment");
    }
    return 0;
}
*/


// lets try using user input

#include <stdio.h>

    int main(){
    int age;
    printf("enter your age :");
    scanf("%d", &age);
    if(age>18)
    printf("you can drive");
    return 0;
}