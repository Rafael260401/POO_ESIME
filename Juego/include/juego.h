#ifndef JUEGO_H
#define JUEGO_H

#include "GUI.h"
#include "Casilla.h"
#include <limits>

// Clase Juego que maneja la lógica del juego y hereda de GUI
class Juego : public GUI {
private:
    char tablero[6][6];  // El tablero del juego
    Casilla casilla;   // Objeto para manejar los movimientos de las casillas
    char jugadorActual; // Jugador actual ('X' o 'O')

public:
    Juego();  // Constructor para inicializar el juego
    void mostrarTablero(char tablero[6][6]) override; // Método para mostrar el tablero
    bool colocar(int fila, int columna);  // Método para colocar una ficha en el tablero
    bool ganar();  // Método para verificar si alguien ha ganado
    void ejecutar();  // Método para iniciar el juego
};

#endif // JUEGO_H
