
#pragma once

#include <string>
using namespace std;

#include "fecha.h"
class Ilusion
{
private:
    string *razon;
    int intensidad;
    fecha fechaInicio;
    fecha fechaFin;
    int nroRazones;
public:
    void inicio();
    void final();
    void aumentar();
    void disminuir();
    void decepcion();
    void confiar();
};