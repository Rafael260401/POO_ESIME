#ifndef FIGURA_H
#define FIGURA_H


class Figura
{
    public:
        /** Default constructor */
        Figura(unsigned int p_Num=0);
        /** Default destructor */
        virtual ~Figura();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Figura(const Figura& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Figura& operator=(const Figura& other);

        /** Access m_numLados
         * \return The current value of m_numLados
         */
        unsigned int GetnumLados() { return m_numLados; }
        /** Set m_numLados
         * \param val New value to set
         */
        void SetnumLados(unsigned int val) { m_numLados = val; }

        /** \brief
         *
         * \return float
         *
         */
        virtual float area();

        /** \brief
         *
         * \return float
         *
         */
        virtual float perimetro();


    protected:

    private:
        unsigned int m_numLados; //!< Member variable "m_numLados"
};

#endif // FIGURA_H
