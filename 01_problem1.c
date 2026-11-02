#include <stdio.h>

int main() {
    int i = 7;
    int* ptr = &i;
    printf("The address of i is %u\n",&i);
    printf("The address of i is %d",*ptr);
    return 0;