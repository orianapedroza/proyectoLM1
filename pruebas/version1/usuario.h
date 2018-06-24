#include <iostream>
#include <actividades.h>
class Usuario{
    private:
        long int clave;
        std::string nombre;
        std::string contrasenna;
    public:
        Actividades P;

        Usuario();
        Usuario(long int, std::string, std::string, Actividades &);
        Usuario(const Usuario&);
        ~Usuario(){};

        ///Observadores

        long int ver_clave() const;
        std::string ver_nombre() const;
        std::string ver_contrasenna() const;
        Actividades ver_Actividades() const;

        ///modi
        void mod_clave(long int);
        void mod_nombre(std::string);
        void mod_contrasenna(std::string);
        void mod_Actividades(Actividades &);

};
