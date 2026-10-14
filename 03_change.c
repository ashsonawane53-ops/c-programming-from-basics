#include <stdio.h>
// function prototype
int change(int a);
int change(int a){
    a = 77; //misnomerr
    return 0;
}
int main(){

    int b=22;
    change(b); //the value of b remains 22
    printf("b is %d",b);
    return 0;
}