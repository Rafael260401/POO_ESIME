#include "Casilla.h"

// M�todo que rota las casillas en distintas direcciones dependiendo de la capa
void Casilla::direccion(char tablero[6][6]) {
    char temp[6][6];
    // Copiamos el tablero actual a un tablero temporal
    for (int fila = 0; fila < 6; ++fila) {
        for (int columna = 0; columna < 6; ++columna) {
            temp[fila][columna] = tablero[fila][columna];
        }
    }

    // Primera capa: borde exterior, se mueve a la derecha
    for (int i = 0; i < 5; ++i) {
        tablero[0][i + 1] = temp[0][i];         // Fila superior
        tablero[i + 1][5] = temp[i][5];         // Columna derecha
        tablero[5][i] = temp[5][i + 1];         // Fila inferior
        tablero[i][0] = temp[i + 1][0];         // Columna izquierda
    }
    tablero[0][0] = temp[1][0];                 // Esquina superior izquierda
    tablero[0][5] = temp[0][4];                 // Esquina superior derecha
    tablero[5][5] = temp[4][5];                 // Esquina inferior derecha
    tablero[5][0] = temp[5][1];                 // Esquina inferior izquierda

    // Segunda capa: segundo borde interior, se mueve a la izquierda
    for (int i = 1; i < 4; ++i) {
        tablero[1][i] = temp[1][i + 1];         // Fila superior
        tablero[i][4] = temp[i + 1][4];         // Columna derecha
        tablero[4][i + 1] = temp[4][i];         // Fila inferior
        tablero[i + 1][1] = temp[i][1];         // Columna izquierda
    }
    tablero[1][1] = temp[1][2];                 // Esquina superior izquierda
    tablero[1][4] = temp[2][4];                 // Esquina superior derecha
    tablero[4][4] = temp[4][3];                 // Esquina inferior derecha
    tablero[4][1] = temp[3][1];                 // Esquina inferior izquierda

    // Tercera capa: tercer borde interior, se mueve a la derecha
    tablero[2][2] = temp[3][2];
    tablero[2][3] = temp[2][2];
    tablero[3][3] = temp[2][3];
    tablero[3][2] = temp[3][3];
}
