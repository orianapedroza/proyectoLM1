#include <usuario.h>
Usuario::Usuario(){
    this->clave = 0;
    this->nombre = "";
    this->contrasenna = ""; 
//    this->P = NULL;
}
Usuario::Usuario(long int clave_u, std::string nombre_u, std::string contrasena_u, Actividades &actividades_u){
    this->clave = clave_u;
    this->nombre = nombre_u;
    this->contrasenna = contrasena_u;
    this->P = actividades_u;
}
Usuario::Usuario(const Usuario& p){
    this->clave = p.ver_clave();
    this->nombre = p.ver_nombre();
    this->contrasenna = p.ver_contrasenna();
    this->P = p.ver_Actividades();
}


long int Usuario::ver_clave() const{
    return this->clave;
}
std::string Usuario::ver_nombre() const{
    return this->nombre;
}
std::string Usuario::ver_contrasenna() const{
    return this->contrasenna;
}
Actividades Usuario::ver_Actividades() const{
    return this->P;
}

///modi
void Usuario::mod_clave(long int clave_u){
    this->clave = clave_u;
}
void Usuario::mod_nombre(std::string nombre_u){
    this->nombre = nombre_u;
}
void Usuario::mod_contrasenna(std::string contrasenna_u){
    this-> contrasenna = contrasenna_u;
}
void Usuario::mod_Actividades(Actividades &actividades_u){
    this-> P = actividades_u;
}
