#ifndef PROGRAMA_H
#define PROGRAMA_H
#include "figura.h"


class Programa
{
    public:
        /** Default constructor */
        Programa();
        /** Default destructor */
        virtual ~Programa();

        void run();
        void creartriangulo();
        void menu();

    protected:

    private:
        Figura *m_f;
};

#endif // PROGRAMA_H
