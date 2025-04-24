#include <stdbool.h>
#include <stdio.h>

int main() {
    int x = 42;                              // integer literal
    float y = 3.14159f;                      // float literal
    double z = 2.718281828459045;            // double literal
    char c = 'A';                            // character literal
    char str[] = "Hello, world!";            // string literal
    bool b = true;                           // boolean literal

    printf("x = %i\n", x);
    printf("y = %f\n", y);
    printf("z = %lf\n", z);
    printf("c = %c\n", c);
    printf("str = %s\n", str);
    printf("b = %i\n", b);  // print boolean value as an integer (0 or 1)

    return 0;
}
