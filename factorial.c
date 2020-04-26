#include <stdio.h>

//  This function doesn't scale well, there are better ways 
int factorial(int x) {
    for (int i = 1; i < x; i++) {
        x *= i;
    }
    return x;
}

int main() {
    int input;
    int output;
    printf("Enter a number to calculate the factorial");
    scanf("%d", input);
    output = factorial(input);
    printf("%d ! = %d", input, output);
    return 0;
}