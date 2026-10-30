#include <stdio.h>

int main() {
    int i = 72;
    int* j = &i; // j is a pointer pointing to i 
    int k = 67;
    printf("the address of i is %u\n",&i);
    printf("the address of i is %u\n",&k);


    printf("the velue at address j is %d\n", *j);
    printf("the velue at address i is %d\n", *(&i));
    printf("the velue at address j is %d\n", *(&j));
    return 0;
}