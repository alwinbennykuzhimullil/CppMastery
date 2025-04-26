// Know the difference between parameter and arguments
#include <stdio.h>

void printMenu() {
    printf("Choose an option:\n");
    printf("0. Play a local game.\n");
    printf("1. Play an online game.\n");
    printf("2. View top scores.\n");
    printf("3. Exit.\n");
}

void printPoints(int points) {
		printf("You have %i points!\n", points);
}

int calculateBonus(int points) {
    if (points < 100) {
        return points * 2;
    } else {
        return points * 3;
    }
}


int main() {
    printPoints(150);
    printMenu();

    int points = 150;
    points = calculateBonus(points);
    printPoints(points);  // 450

    printPoints(calculateBonus(75));


	return 0;
}
