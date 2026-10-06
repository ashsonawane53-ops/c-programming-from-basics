/*#include <stdio.h>

int main(){
    int age = 22;

    if(age < 18)
    {
        printf("candidate do not have driving licence");
    }
    else
    {
        printf("candidate can drive");
    }
    return 0;
}
*/


// let's try using user input
#include <stdio.h>

int main(){
    int age;
    printf("enter your age :");
    scanf("%d", &age);

    if(age < 18)
    {
        printf("candidate do not have driving licence");
    }
    else
    {
        printf("candidate can drive");
    }
    return 0;
}
