#include <stdio.h>

void print2D(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}


int main(){

    int scores[][10] = {{10, 20, 30, 40, 50, 60, 70, 80, 90, 100},
                        {5, 10, 15, 20, 25, 30, 35, 40, 45, 50}};

    int rows = sizeof(scores) / sizeof(scores[0]);
    int cols = sizeof(scores[0]) / sizeof(scores[0][0]);

    printf("Rows: %lu\n", sizeof(scores) / sizeof(scores[0]));
    printf("Cols: %lu\n", sizeof(scores[0]) / sizeof(scores[0][0]));

    print2D(rows, cols, scores);
    return 0;
}
