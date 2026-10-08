//whria a program to print first n 
//natural number using for loop

#include <stdio.h>

int main(){
    int n,i;
    printf("enter n :");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}