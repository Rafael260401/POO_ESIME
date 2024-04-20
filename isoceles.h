#ifndef ISOCELES_H
#define ISOCELES_H

#include "triangulo.h"

class isoceles : public Triangulo
{
    public:
        /** Default constructor */
        explicit isoceles(float p_iguales=0, float p_desiguales=0);
        isoceles (const isoceles &);
        /** Default destructor */
        virtual ~isoceles();

};
#endif // ISOCELES_H
