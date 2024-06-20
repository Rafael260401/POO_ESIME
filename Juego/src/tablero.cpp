#include "Tablero.h"

Tablero::Tablero() {
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            board[i][j] = '.';
        }
    }
}

void Tablero::displayBoard(char (&board)[6][6]) {
    drawBoardWithCoordinates(board); // Usa el método de la clase base
}

bool Tablero::placePiece(int row, int col, char piece) {
    if(row >= 0 && row < 6 && col >= 0 && col < 6 && board[row][col] == '.') {
        board[row][col] = piece;
        rotatePieces();
        return true;
    }
    return false;
}

void Tablero::rotatePieces() {
    char temp[6][6];
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            temp[i][j] = board[i][j];
        }
    }

    // Rotate edges clockwise
    for(int i = 0; i < 5; i++) {
        board[0][i + 1] = temp[0][i];         // Top row
        board[i + 1][5] = temp[i][5];         // Right column
        board[5][i] = temp[5][i + 1];         // Bottom row
        board[i][0] = temp[i + 1][0];         // Left column
    }
    board[0][0] = temp[1][0];                 // Top-left corner
    board[0][5] = temp[0][4];                 // Top-right corner
    board[5][5] = temp[4][5];                 // Bottom-right corner
    board[5][0] = temp[5][1];                 // Bottom-left corner
}

bool Tablero::checkFullBoard() {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (board[i][j] == '.') {
                return false;
            }
        }
    }
    return true;
}

char (&Tablero::getBoard())[6][6] {
    return board;
}
