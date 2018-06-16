#include <actividades.h>
#include <stdexcept>
# include <algorithm>
Actividades::Actividades(){
    this-> estado = 0;
    this-> tipo_actividad = ' ';
    this-> F = nullptr;
    this-> H = nullptr;
}

Actividades::Actividades(int estado_u, char tipo_actividad_u, Fecha* f_u, Hora* h_u){
    this-> mod_estado(estado_u);
    this-> mod_tipo_actividad(tipo_actividad_u);
    this-> mod_fecha(f_u);
    this-> mod_hora(h_u);
}

Actividades::Actividades(const Actividades &copia){
    this-> estado = copia.estado;
    this-> tipo_actividad = copia.tipo_actividad;
    this-> F= copia.F;
    this-> H= copia.H;
}

int Actividades::ver_estado() const{
    return this-> estado;
}

char Actividades::ver_tipo_actividad() const{
    return this-> tipo_actividad;
}
 
void Actividades::mod_estado(int estado_u){
    if((estado_u != 0) and (estado_u != 1)) throw std::domain_error("Estado invalido\n");
    this-> estado = estado_u;
}

void Actividades::mod_tipo_actividad(char tipo_actividad_u){
    if((tipo_actividad_u == 'A') or (tipo_actividad_u == 'R') or (tipo_actividad_u == 'E'))
        this-> tipo_actividad = tipo_actividad_u;
     else throw std::domain_error("Tipo de actividad no invalido\n");
    
}
void Actividades::mod_fecha(Fecha *f_u){
    this-> F->mod_dia(f_u->ver_dia());
    this-> F->mod_mes(f_u->ver_mes());
    this-> F->mod_anno(f_u->ver_anno());
}
void Actividades::mod_hora(Fecha *h_u){
    this-> H->mod_hora(h_u->ver_hora());
    this-> H->mod_minutos(h_u->ver_minutos());

}