#include<stdio.h>
int main(){
    int a = 5;
    int b = 7;
    int c = 4;
    printf("the value is %d\n", a*b/c + 7);
    printf("the value is %d", 3*b/2*c + 7*a);
    // 3*b/2*c + 7*a
    // 3*b/2*c + 35
    // 21/2*c + 35
    // 10*c + 35
    // 40 + 35 = 75
    
    return 0;
}