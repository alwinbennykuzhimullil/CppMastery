#include <stdio.h>
#include <string.h>

void welcomeUser(char fn[], char ln[]) {
    printf("Welcome to the game, %s %s!\n", fn, ln);
}

int lengthWithSpace(char fn[], char ln[]) {
    fn[0] = 'K';
    return strlen(fn) + 1 + strlen(ln);
}

void concatNames(char name[], char fn[], char ln[]) {
    strcpy(name, fn);
    strcat(name, " ");
    strcat(name, ln);
}

int main(){
    char fn[] = "Alwin";
    char ln[] = "Benny";
    welcomeUser(fn, ln);
    printf("%i\n", lengthWithSpace(fn, ln));  // 11
    welcomeUser(fn, ln);

    char full[12];
    concatNames(full, fn, ln);
    printf("%s\n", full);

    return 0;
}
