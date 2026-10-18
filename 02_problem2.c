#include <stdio.h>

float c2f(float);

float c2f(float c) {
    return (c * 9.0 / 5.0) + 32;
}

int main() {
    float c = 45;
    printf("Celsius to Fahrenheit for %f is %f", c, c2f(c));
    return 0;
}