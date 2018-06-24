#include <fecha.h>
#include <stdexcept>

Fecha::Fecha(){
    this-> dia = 0;
    this-> mes = 0;
    this-> anno = 0;
}

Fecha::Fecha(unsigned int dia_u,unsigned int mes_u,unsigned int anno_u){
    this-> mod_dia(dia_u);
    this-> mod_mes(mes_u);
    this-> mod_anno(anno_u);
}

Fecha::Fecha(const Fecha &copia){
    this-> dia = copia.ver_dia();
    this-> mes = copia.ver_mes();
    this-> anno = copia.ver_anno();
}

unsigned int Fecha::ver_dia() const{
    return this-> dia;
}

unsigned int Fecha::ver_mes() const{
    return this-> mes;
}

unsigned int Fecha::ver_anno() const{
    return this-> anno;
}

void Fecha::mod_dia(unsigned int dia_u){
    if(dia_u > 31) throw std::domain_error("Dias invalidos\n");
    this-> dia = dia_u;
}

void Fecha::mod_mes(unsigned int mes_u){
    if(mes_u > 12) throw std::domain_error("Mes invalidos\n");
    this-> mes = mes_u;
}

void Fecha::mod_anno(unsigned int anno_u){
    this-> anno = anno_u; 
}