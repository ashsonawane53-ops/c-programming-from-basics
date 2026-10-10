#include <stdio.h>

int main(){
    int n = 5;
    int prime = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        if(n%i==0){
            prime++;
        }
    }
    if(prime==0){
        printf("The number is a prime number.\n");
    }else{
        printf("The number is not a prime number.\n");
    }
    return 0;
}