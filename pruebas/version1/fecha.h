#include<iostream>

class Fecha{
    private:
        unsigned int dia;
        unsigned int mes;
        unsigned int anno;
    public:

        Fecha();
        Fecha(unsigned int,unsigned int,unsigned int);
        Fecha(const Fecha&);
        ~Fecha(){};

        ///Observadores

        unsigned int ver_dia() const;
        unsigned int ver_mes() const;
        unsigned int ver_anno() const;

        ///modi
        void mod_dia(unsigned int);
        void mod_mes(unsigned int);
        void mod_anno(unsigned int);
};