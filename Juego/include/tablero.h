#ifndef TABLERO_H
#define TABLERO_H

#include "GUI.h"

class Tablero : public GUI<6, 6> {
private:
    char board[6][6];

public:
    Tablero();
    void displayBoard(char (&board)[6][6]) override;
    bool placePiece(int row, int col, char piece);
    void rotatePieces();
    bool checkFullBoard();
    char (&getBoard())[6][6]; // Para obtener referencia al tablero
};

#endif // TABLERO_H
