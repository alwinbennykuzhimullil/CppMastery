// clearing buffer stream
#include <stdio.h>

int main() {
    char c = '\0';
    while (c != 'q') {
        printf("Enter a key: ");
        scanf("%c", &c);
        printf("You entered %c\n", c);
        while (getchar() != '\n') {
        }
    }
    return 0;
}
