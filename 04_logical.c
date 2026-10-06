/*#include <stdio.h>

int main(){
    int a = 1, b = 1;
    printf("the value of and b is %d\n", a && b);
    printf("the value of a or b is %d\n", a || b);
    printf("the value of not(a) is %d", !a);
    return 0;
}
*/

// let's try it using user input
#include <stdio.h>

int main(){
    int a , b;
    printf("enter the value of a :");
    scanf("%d", & a);
    printf("enter the value of b :");
    scanf("%d", & b);
    printf("the value of a and b is %d\n", a && b);
    printf("the value of a or b is %d\n", a || b);
    printf("the value of not(a) is %d", !a);
    return 0;
}
