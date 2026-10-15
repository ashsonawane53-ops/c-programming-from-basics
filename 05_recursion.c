#include <stdio.h>

int factorial(int);
int factorial(int n){
    if(n==1 || n == 0){ //base condition
        return 1;
    }
    return factorial(n-1)*n;
}
int main(){
    int num;
    printf("enter number :");
    scanf("%d",&num);
    printf("the factorial of %d is %d",num, factorial(num));
    
    return 0;
}