#include<iostream>
#include<actividades.h>

class Planificacion{

    public:
        Actividades A;

    ///Constructores
        Planificacion();
        Planificacion(Actividades );
        Planificacion(const Planificacion&);
    ///Observadores
        int ver_actividades() const;
        
    ///Modificadores
        void mod_actividades(Actividades );
    
};
