#include <stdio.h>

int main() {
    int a = 10, b = 3;
    printf("a = %d, b = %d\n", a, b);

    // Arithmetic operators
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Relational operators
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);

    // Logical operators
    printf("(a > 5) && (b < 5): %d\n", (a > 5) && (b < 5));
    printf("(a < 5) || (b < 5): %d\n", (a < 5) || (b < 5));
    printf("!(a == b): %d\n", !(a == b));

    // Assignment operators
    int c = a;
    c += b;
    printf("c += b: %d\n", c);
    c -= b;
    printf("c -= b: %d\n", c);

    // Increment and decrement
    printf("a++: %d\n", a++);
    printf("Now a: %d\n", a);
    printf("--b: %d\n", --b);

    return 0;
}