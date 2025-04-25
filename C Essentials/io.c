// secation 2.1: Reading input form the user

#include <stdio.h>

int main(){

    int age;
    char name[50];  // can store upto 49 characters; have to store a space for the null terminating character.

    printf("Enter your name: ");
    scanf("%49s", name);    // no need to use & for strings
    // %49s - limits user to 49 chars. ignores the rest

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hi %s, You are %i years old\n", name, age);


    return 0;
}
