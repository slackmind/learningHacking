#include <stdio.h>

int main() {
    int a;
    int b;
    float c;
    float d;

    a = 13;
    b = 5;

    c = a / b;                      //  note a, b integers
    d = (float) a / (float) b;      //  typecast a, b to float

    printf("[integers]\t a = %d\t b = %d\n", a, b);
    printf("[floats]\t c = %f\t c = %f\t d = %f\n", c , d);
}