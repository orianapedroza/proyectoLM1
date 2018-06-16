#include <materia.h>
#include <usuario.h>
///#include <materia.h>
#include <stdexcept>
#include <iostream>
#include <vector>

int main(){

    Fecha *f, fecha(12,7,2018);
    f = &fecha;
    Hora *h,hora(7,45);
    h = &hora;

    Actividades *a ,actividades(1,'A',f,h);
    a = &actividades;
    Usuario usuario1(1234,"mafer","Negro123",a);

    /*usuario1.ver_clave();
    usuario1.ver_nombre();
    usuario1.ver_contrasenna();
    usuario1.ver_Actividades();*/

    return 0;
}