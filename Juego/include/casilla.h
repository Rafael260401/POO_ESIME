#ifndef CASILLA_H
#define CASILLA_H

// Clase Casilla que maneja la lógica de movimiento de las casillas
class Casilla {
public:
    // Método que rota las casillas en distintas direcciones dependiendo de la capa
    void direccion(char tablero[6][6]);
};

#endif // CASILLA_H
