#ifndef CASILLA_H
#define CASILLA_H

// Clase Casilla que maneja la l�gica de movimiento de las casillas
class Casilla {
public:
    // M�todo que rota las casillas en distintas direcciones dependiendo de la capa
    void direccion(char tablero[6][6]);
};

#endif // CASILLA_H
