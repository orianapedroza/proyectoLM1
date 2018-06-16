#include<iostream>
#include<fecha.h>
#include<hora.h>

class Actividades{

    private:
        int estado;
        char tipo_actividad;

    public:
        Fecha *F;
        Hora *H;

    ///Constructores
        Actividades();
        Actividades(int, char, Fecha*,Hora*);
        Actividades(const Actividades&);
        ~Actividades(){};

    ///Observadores
        int ver_estado() const;
        char ver_tipo_actividad() const;
        
    ///Modificadores
        void mod_estado(int);
        void mod_tipo_actividad(char);
        void mod_fecha(Fecha *);
        void mod_hora(Hora *h_u);
};