#include<hora.h>
#include <stdexcept>

Hora::Hora(){
    this-> hora = 0;
    this-> minutos = 0;
}
Hora::Hora(int hora_u, int minutos_u){
    this-> mod_hora(hora_u);
    this-> mod_minutos(minutos_u);
}
Hora::Hora(const Hora &copia){
    this-> hora = copia.ver_hora();
    this-> minutos = copia.ver_minutos();
}

int Hora::ver_hora() const{
    return this-> hora;
}
int Hora::ver_minutos() const{
    return this-> minutos;
}
    
void Hora::mod_hora(int hora_u){
    if((hora_u > 12) and (hora_u < 0)) throw std::domain_error("Hora no valida\n");
    this-> hora = hora_u;
}

void Hora::mod_minutos(int minutos_u){
    if((minutos_u > 60)){
     this-> hora = hora+1;
     this-> minutos = 0;
    }
    this-> minutos = minutos_u;
}
