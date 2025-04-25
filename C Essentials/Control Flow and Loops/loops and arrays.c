#include <stdio.h>

int main() {
    char students[50][50];
    int count = 0;

    printf("how many students do you want to store? Up to 50: ");
    scanf("%i", &count);

    printf("Enter a student name one per line.\n");
    for (int i = 0; i < count; i++) {
        printf("student %i: ", i+1);
        scanf("%49s", students[i]);
    }

    printf("Here is the list of students:\n");
    for (int i = 0; i < count; i++) {
        printf("student %i: %s\n", i+1, students[i]);
    }

    return 0;
}
