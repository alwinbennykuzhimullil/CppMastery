#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int x = 5;
    int y = 3;
    printf("%f \n", x / (double)y);   // casting
    printf("%i \n", x % y); //2         // modulus

    x = pow(5, 3);
    printf("%i \n", x);

    x += 5;
    x -= 5;
    x %= 5;
    x++;
    x--;

    int age = 30;
    printf("%i \n", age > 30);   // false
    printf("%i \n", age < 30);   // false
    printf("%i \n", age <= 30);  // true
    printf("%i \n", age >= 30);  // true
    printf("%i \n", !(age > 30));  // true

    printf("%i \n", (bool)30);  // true
    printf("%i \n", (bool)-1);  // true
    printf("%i \n", (bool)0);   // false


    return 0;
}
