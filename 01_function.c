#include <stdio.h>

//function prototype
int sum(int, int);

//function definition
int sum(int x, int y){
    printf("the sum is %d\n", x+y);
    return x+y;
}
int main(){
    int a = 10;
    int b = 20;
    
    sum(a,b);  //function call

    int a1 = 16;
    int b1 = 28;
   
    sum(a1,b1); //function call

    int a2 = 88;
    int b2 = 14;

    
    sum(a2,b2); //function call
    return 0;
}