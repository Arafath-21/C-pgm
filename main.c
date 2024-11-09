#include <stdio.h>

int main() {
    int num = 42;
    double pi = 3.14;

    printf("Size of num variable: %lu bytes\n", sizeof(num));
    printf("Size of pi variable: %lu bytes\n", sizeof(pi));

    return 0;
}
