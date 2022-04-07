#pragma once

#include <string>
#include "producto.h"
using namespace std;

class Cliente
{
private:
    int DNI;
    string nombre;
    string direccion;
    int celular;
    float saldo;
    char genero;
    Producto *idProducto;

public:
    // métodos de servicio
    void imprimir();
    void ingresar();
    // interface de clase
    void comprar(Producto *);
    void devolver(Producto *);
    void pagar(float);
    void amortizar(float);
    // getters
    int getDNI();
    string getNombre();
    string getDireccion();
    int getCelular();
    float getSaldo();
    char getGenero();
    int *getIdProducto();
    // setters
    void setDNI(int);
    void setNombre(string);
    void setDireccion(string);
    void setCelular(int);
    void setSaldo(float);
    void setGenero(char);
    void setIdProducto(int *);
};