#ifndef GUI_H
#define GUI_H

#include <cstddef>
#include <iostream>
#include <cstdlib>

// Clase base GUI que define cómo se muestra el tablero
class GUI {
public:
    // Método virtual puro que se debe sobrescribir en clases derivadas
    virtual void mostrarTablero(char tablero[6][6]) = 0;

    // Método para dibujar el tablero con coordenadas
    void dibujarTableroConCoordenadas(char tablero[6][6]) {
        std::system("cls"); // Limpiar la consola

        // Definir la plantilla del tablero
        const char *bordeSuperiorInferior = "  +---+---+---+---+---+---+";
        const char *bordeLateral = "|";

        // Colores ANSI
        const char *azul = "\033[44m";
        const char *blanco = "\033[47m";
        const char *reset = "\033[0m";

        // Imprimir encabezado de las columnas
        std::cout << "    ";
        for (std::size_t columna = 0; columna < 6; ++columna) {
            std::cout << columna << "   ";
        }
        std::cout << std::endl;

        // Imprimir cada fila con su número de fila al inicio
        for (std::size_t fila = 0; fila < 6; ++fila) {
            std::cout << bordeSuperiorInferior << std::endl;
            std::cout << fila << " ";
            for (std::size_t columna = 0; columna < 6; ++columna) {
                std::cout << bordeLateral;
                if (tablero[fila][columna] != '.') {
                    std::cout << azul << " " << tablero[fila][columna] << " " << reset;
                } else {
                    std::cout << blanco << " " << tablero[fila][columna] << " " << reset;
                }
            }
            std::cout << bordeLateral << std::endl;
        }
        std::cout << bordeSuperiorInferior << std::endl;
    }
};

#endif // GUI_H
