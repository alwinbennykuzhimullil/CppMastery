#include <stdio.h>

int main() {
    int guess;
    int CORRECT[] = {50, 51, 52, 53, 54};

    int location = 0;
    printf("Guess 5 numbers one at a time: ");
    while (1) {
        scanf("%i", &guess);
        if (guess == CORRECT[location]) {
            printf("Correct! You guessed %i\n", guess);
            location++;
            if (location == 5) {
                break;
            }
            printf("%lu numbers left\n",
                   (sizeof(CORRECT) / sizeof(CORRECT[0])) - location);
            continue;
        }
        printf("Try again: ");
    }
    return 0;
}
