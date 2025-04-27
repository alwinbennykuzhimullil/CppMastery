//for loops
// function
#include <iostream>

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

    return 0;
}
