#include <iostream>

template <typename T, int rows, int cols>
void printArray(T(data)[rows][cols]) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            std::cout << data[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

bool checkForWin(char board[][3]) {
    return (board[0][0] == board[0][1] && board[0][1] == board[0][2] &&
            board[0][0] != '-') ||
           (board[1][0] == board[1][1] && board[1][1] == board[1][2] &&
            board[1][0] != '-') ||
           (board[2][0] == board[2][1] && board[2][1] == board[2][2] &&
            board[2][0] != '-') ||
           (board[0][0] == board[1][0] && board[1][0] == board[2][0] &&
            board[0][0] != '-') ||
           (board[0][1] == board[1][1] && board[1][1] == board[2][1] &&
            board[0][1] != '-') ||
           (board[0][2] == board[1][2] && board[1][2] == board[2][2] &&
            board[0][2] != '-') ||
           (board[0][0] == board[1][1] && board[1][1] == board[2][2] &&
            board[0][0] != '-') ||
           (board[0][2] == board[1][1] && board[1][1] == board[2][0] &&
            board[0][2] != '-');
}

int main() {
    char board[][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};

    printArray<char, 3, 3>(board);

    int moveCount = 0;
    char current = 'x';
    while (true) {
        int row = 0;
        int col = 0;
        std::cout << current << "'s turn" << std::endl;
        std::cout << "pick a row (1, 2, 3): ";
        std::cin >> row;

        std::cout << "pick a col (1, 2, 3): ";
        std::cin >> col;

        if (row < 1 || row > 3 || col < 1 || col > 3) {
            std::cout << "Out of bounds. Try again. \n";
            continue;
        }

        if (board[row - 1][col - 1] == '-') {
            board[row - 1][col - 1] = current;
            moveCount++;
        } else {
            std::cout << "spot used. Try again. ";
            continue;
        }

        printArray<char, 3, 3>(board);
        if (checkForWin(board)) {
            std::cout << current << " wins!" << std::endl;
            return 0;
        };

        if (moveCount == 9) {
            std::cout << "It's a draw!" << std::endl;
            return 0;
        }
        if (current == 'x') {
            current = 'o';
        } else {
            current = 'x';
        }
    }
}
