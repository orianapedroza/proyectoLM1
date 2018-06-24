#include<apuntes.h>

Apuntes::Apuntes(){
    this->estado= 0;
    this->texto = "";
}
Apuntes::Apuntes(int estado_u, std::string texto_u){
    this->estado= estado_u;
    this->texto = texto_u;
}
Apuntes::Apuntes(const Apuntes& p){
    this->estado= p.ver_estado();
    this->texto = p.ver_texto();
}

///Observadores
int Apuntes::ver_estado() const{
    return this->estado;
}
std::string Apuntes::ver_texto() const{
    return this->texto;
}

///modi
void Apuntes::mod_estado(int estado_u){
    this->estado = estado_u;
}
void Apuntes::mod_texto(std::string texto_u){
    this->texto = texto_u;
}