#include<iostream>
#include<apuntes.h>

class Materia{
    private:
        std::string tipo; //tipo de materia

    public:
        Apuntes *A;
        
        Materia();
        Materia(std::string, Apuntes *);
        Materia(const Materia&);
        ~Materia(){};

        ///Observadores
        std::string ver_tipo() const;
        Apuntes* ver_A() const;


        ///Modificadores
        void mod_tipo(std::string);
        void mod_Apuntes(Apuntes *);
};