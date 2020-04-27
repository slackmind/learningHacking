#include <stdio.h>
#include <string.h>

// string copy introduced
int main() {
    char str_a[20];

    strcpy(str_a, "hello, world!\n");
    printf(str_a);
}