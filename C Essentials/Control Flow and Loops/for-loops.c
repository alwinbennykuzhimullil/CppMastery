// reading and printing data with foor loops
// iterating forward and backbards
#include <stdio.h>

int main() {
    char names[5][50] = {"Alice", "Bob", "Charlie", "David", "Emily"};
    int grades[] = {85, 92, 77, 88, 90};
    /*
    Initialization (int i = 0;)
    Conditional  (i < 5;)
    Update (i++;)
    */
    size_t size = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < size; i++) {
        printf("%s got a grade of %d\n", names[i], grades[i]);
    }

    return 0;
}
