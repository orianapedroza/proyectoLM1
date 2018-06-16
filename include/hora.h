#include<iostream>

class Hora{
    private:
        int hora;
        int minutos;
    public:

        Hora();
        Hora(int, int);
        Hora(const Hora&);
        ~Hora(){};

        ///Observadores

        int ver_hora() const;
        int ver_minutos() const;
    
        ///modi
        void mod_hora(int);
        void mod_minutos(int);
};