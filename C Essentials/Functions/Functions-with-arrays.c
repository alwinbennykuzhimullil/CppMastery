#include <stdio.h>

void readData(int data[], int size) {
    printf("Reading %i values\n", size);

    for (int i = 0; i < size; i++) {
        printf("Enter an int: ");
        scanf("%i", &data[i]);
        printf("%i left to fill...\n", size - 1 - i);
    }
};

void printData(int data[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%i ", data[i]);
    }
    printf("\n");
}

int main() {
    int scores[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(scores) / sizeof(scores[0]);
    printData(scores, size);
    readData(scores, size);
    printData(scores, size);
}
