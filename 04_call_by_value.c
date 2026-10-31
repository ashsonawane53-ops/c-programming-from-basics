#include <stdio.h>
int sum(int, int);
int sum(int a, int b){
    return a+b;
}
int main() {
    printf("the sum of 1 and 7 is %d\n",sum(1,7));
    return 0;
}