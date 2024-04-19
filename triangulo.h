#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "figura.h"


class Triangulo : public Figura
{
    public:
        /** Default constructor */
        Triangulo(float p_Lado1=0, float p_Lado2=0, float p_Lado3=0);
        /** Default destructor */
        virtual ~Triangulo();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Triangulo(const Triangulo& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Triangulo& operator=(const Triangulo& other);

        /** Access m_Lado1
         * \return The current value of m_Lado1
         */
        float GetLado1() { return m_Lado1; }
        /** Set m_Lado1
         * \param val New value to set
         */
        void SetLado1(float val) { m_Lado1 = val; }
        /** Access m_Lado2
         * \return The current value of m_Lado2
         */
        float GetLado2() { return m_Lado2; }
        /** Set m_Lado2
         * \param val New value to set
         */
        void SetLado2(float val) { m_Lado2 = val; }
        /** Access m_Lado3
         * \return The current value of m_Lado3
         */
        float GetLado3() { return m_Lado3; }
        /** Set m_Lado3
         * \param val New value to set
         */
        void SetLado3(float val) { m_Lado3 = val; }
        float area();
        float perimetro();

    protected:

    private:
         float m_Lado1; //!< Member variable "m_Lado1"
         float m_Lado2; //!< Member variable "m_Lado2"
         float m_Lado3; //!< Member variable "m_Lado3"
};

#endif // TRIANGULO_H
