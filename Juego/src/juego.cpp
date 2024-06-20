#include "Juego.h"

// Constructor que inicializa el tablero y el jugador actual
Juego::Juego() : jugadorActual('X') {
    // Inicializamos el tablero con puntos (vacío)
    for (int fila = 0; fila < 6; ++fila) {
        for (int columna = 0; columna < 6; ++columna) {
            tablero[fila][columna] = '.';
        }
    }
}

// Método para mostrar el tablero usando el método de la clase base
void Juego::mostrarTablero(char tablero[6][6]) {
    dibujarTableroConCoordenadas(tablero);
}

// Método para colocar una ficha en el tablero
bool Juego::colocar(int fila, int columna) {
    if (fila >= 0 && fila < 6 && columna >= 0 && columna < 6 && tablero[fila][columna] == '.') {
        tablero[fila][columna] = jugadorActual;
        casilla.direccion(tablero); // Mover las casillas después de colocar una ficha
        return true;
    }
    return false;
}

// Método para verificar si un jugador ha ganado
bool Juego::ganar() {
    // Verificar si hay una línea completa de 6 fichas iguales en cualquier dirección
    for (int fila = 0; fila < 6; ++fila) {
         for (int columna = 0; columna < 6; ++columna) {
            if (tablero[fila][columna] != '.') {
                // Verificar horizontal
                if (columna <= 1 && tablero[fila][columna] == tablero[fila][columna + 1] &&
                    tablero[fila][columna] == tablero[fila][columna + 2] &&
                    tablero[fila][columna] == tablero[fila][columna + 3] &&
                    tablero[fila][columna] == tablero[fila][columna + 4] &&
                    tablero[fila][columna] == tablero[fila][columna + 5]) {
                    return true;
                }
                // Verificar vertical
                if (fila <= 1 && tablero[fila][columna] == tablero[fila + 1][columna] &&
                    tablero[fila][columna] == tablero[fila + 2][columna] &&
                    tablero[fila][columna] == tablero[fila + 3][columna] &&
                    tablero[fila][columna] == tablero[fila + 4][columna] &&
                    tablero[fila][columna] == tablero[fila + 5][columna]) {
                    return true;
                }
                // Verificar diagonal
                if (fila <= 1 && columna <= 1 && tablero[fila][columna] == tablero[fila + 1][columna + 1] &&
                    tablero[fila][columna] == tablero[fila + 2][columna + 2] &&
                    tablero[fila][columna] == tablero[fila + 3][columna + 3] &&
                    tablero[fila][columna] == tablero[fila + 4][columna + 4] &&
                    tablero[fila][columna] == tablero[fila + 5][columna + 5]) {
                    return true;
                }
            }
        }
    }
    return false;
}

// Método que corre el juego
void Juego::ejecutar() {
    while (true) {
        // Mostrar el tablero
        mostrarTablero(tablero);
        std::cout << "Turno del jugador " << jugadorActual << "." << std::endl;
        std::cout << "Ingrese fila y columna (0-5): ";
        int fila, columna;
        std::cin >> fila >> columna;

        // Colocar ficha si es posible
        if (colocar(fila, columna)) {
            // Verificar si el jugador actual ha ganado
            if (ganar()) {
                mostrarTablero(tablero);
                std::cout << "¡El jugador " << jugadorActual << " gana!" << std::endl;
                break;
            }

            // Cambiar jugador
            jugadorActual = (jugadorActual == 'X') ? 'O' : 'X';
        } else {
            std::cout << "Movimiento invalido, intente de nuevo." << std::endl;
            // Pausar la ejecución hasta que el usuario presione Enter
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpiar el buffer de entrada
            std::cin.get(); // Esperar a que el usuario presione Enter
        }
    }
}
