//for loops
// function
#include <iostream>

double avg(int data[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

int main() {
		//only need second size, which is the # of columns
    char board[][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};

    board[0][0] = 'x';
    board[0][1] = 'o';
    board[1][1] = 'x';
    board[0][2] = 'o';
    board[2][2] = 'x';

    int rows = sizeof board / sizeof board[0];
    int cols = sizeof board[0] / sizeof board[0][0];
    std::cout << rows << " " << cols << std::endl << std::endl;  // 3 3

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            std::cout << board[row][col] << " ";
        }
        std::cout << std::endl;
    }

    int ages[] = {20, 30, 40, 50};
    double ageAverage = avg(ages, 4);
    std::cout << ageAverage << std::endl;

    return 0;
}
