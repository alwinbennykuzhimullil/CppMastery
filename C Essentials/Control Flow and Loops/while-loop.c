#include <stdio.h>

int main() {
    int i = 0;    // Initialization (int i = 0;)
    while (i < 10) {  // Conditional  (i < 5;)
        printf("%i \n", i);
        i++; // Update (i++;)
    }
    return 0;
}


// while loop:
// Use a while loop when you’re unsure how many iterations are needed beforehand.
// It's great for looping based on a condition that depends on real-time input or dynamic changes.
//
// for loop:Use a for loop when you know in advance how many times the loop needs to execute.
// It’s ideal for situations with a fixed iteration count.
