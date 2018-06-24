#include<iostream>

class Apuntes{
    private:
        int estado; //1.Realizado / 2.No realizado
        std::string texto; 
    public:

        Apuntes();
        Apuntes(int, std::string);
        Apuntes(const Apuntes&);
        ~Apuntes(){};

        ///Observadores
        int ver_estado() const;
        std::string ver_texto() const;

        ///modi
        void mod_estado(int);
        void mod_texto(std::string);

};