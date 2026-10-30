#include <stdio.h>

int main() {
    char i = 'A';
    char* j = &i; // j is a pointer pointing to i 
    float k = 5.232;
    float* k1 = &k;
    printf("the address of i is %p\n",&i);
    printf("the address of i is %p\n",j);
    printf("the address of i is %p\n",&k);


    
    printf("the velue at address j is %d\n", *(&i));
    
    return 0;
}