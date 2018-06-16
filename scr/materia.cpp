#include<materia.h>
#include <stdexcept>
        
Materia::Materia(){
    this-> tipo = "NULL";
    this-> A = nullptr;
}
Materia::Materia::Materia(std::string nombre_materia_u, Apuntes *A_u){
    this-> mod_tipo(nombre_materia_u);
    this-> mod_Apuntes(A_u);
}
Materia::Materia(const Materia &copia){
    this-> tipo = copia.ver_tipo();
    this-> A = copia.ver_A();    
}

std::string Materia::ver_tipo() const{
    return this-> tipo;
}
Apuntes*  Materia::ver_A() const{
    return this-> A;
}
void  Materia::mod_tipo(std::string nombre_materia_u){
    this-> tipo = nombre_materia_u;
}
void  Materia::mod_Apuntes(Apuntes *A_u){
   this-> A->mod_texto(A_u->ver_texto()); 
   this-> A->mod_estado(A_u->ver_estado()); 
}