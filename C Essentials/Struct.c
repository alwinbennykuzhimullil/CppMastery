#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    // Declare and initialize a structure variable
    struct Student student1;

    // Assign values to the fields
    strcpy(student1.name, "Alice");
    student1.age = 20;
    student1.grade = 92.5;

    // Access and print the fields
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Grade: %.2f\n", student1.grade);

    return 0;
}
