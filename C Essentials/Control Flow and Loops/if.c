#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    char correct[50] = "Password123";
    printf("Guess the password: ");
    scanf("%s", password);
    printf("You guessed %s.\n", password);

    int code;
    int correct_code = 30;
    printf("Guess the code: ");
    scanf("%i", &code);
    printf("The code you guess is %i.\n", code);

    int result = strcmp(password, correct);

    if (result == 0 && code == correct_code) {
        printf("Great job!\n");
    } else {
        printf("Wrong!\n");
    }
    return 0;
}
