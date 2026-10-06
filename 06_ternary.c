/*#include <stdio.h>

int main(){
  // condition ? expression-if-true : expression-if-false
    int a = 10;
    int b = 20;
    a>b?printf("a is greater than b"):printf("b is greater than a");
    return 0;
}*/

// let's try using user input
#include <stdio.h>

int main(){
    int a,b;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    a>b?printf("a is greater") : printf("b is greater");
    return 0;
}