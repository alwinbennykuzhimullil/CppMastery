// since a string is a char array, to store have a string array we use 2d array.
#include <stdio.h>
int main(){

    // Define the array of names
    char String_array[5][50] = {"Alice", "Bob", "Charlie", "David", "Emily"};

    // Get User Input
    int index;
    printf("Enter an index to get the name for (0-4): ");
    scanf("%i", &index);

    // Print the name
    printf("The name at index %i is %s\n", index, String_array[index]);
    return 0;
}
