#pragma once
#include "producto.h"
#include <string>
#include <iostream>

using namespace std;

// métodos de servicio
void Producto::imprimir()
{
    system("clear");
    cout << "DATOS DE PRODUCTO:" << endl;
    cout << "=================" << endl;
    cout << "id: " << id << endl;
    cout << "nombre: " << nombre << endl;
    cout << "descripcion: " << descripcion << endl;
    cout << "cantidad: " << cantidad << endl;
    cout << "precio: " << precio << endl;
    cout << "estado: " << estado << endl;
    system("pause");
}
void Producto::ingresar()
{
    system("clear");
    cout << "INGRESAR DATOS DE PRODUCTO:" << endl;
    cout << "==========================" << endl;
    cout << "id: ";
    cin >> id;
    cin.ignore();
    cout << "nombre: ";
    getline(cin, nombre);
    cout << "descripcion: ";
    getline(cin, descripcion);
    cout << "cantidad: ";
    cin >> cantidad;
    cout << "precio: ";
    cin >> precio;
    cout << "estado: ";
    cin >> estado;
}
// interface de clase
void Producto::aumentarStock(int c)
{
    cantidad += c; //cantidad =cantidad+ c;
}
void Producto::disminuirStock(int c)
{
    cantidad -= c;
}
float Producto::calcularIGV()
{
    return precio + 0.18;
}
void Producto::cambiarPrecio(float p)
{
    setPrecio(p);
}
float Producto::obtenerValorProducto()
{
    return cantidad * precio;
}
float Producto::aplicarDescuento(float descuento)
{
    if (descuento > 0.01 && descuento < 0.3)
        return (precio * descuento);
    else
        return 0;
}

// getters
int Producto::getId()
{
    return id;
}
string Producto::getNombre()
{
    return nombre;
}
string Producto::getDescripcion()
{
    return descripcion;
}
int Producto::getCantidad()
{
    return cantidad;
}
float Producto::getPrecio()
{
    return precio;
}
char Producto::getEstado()
{
    return estado;
}
// setters
void Producto::setId(int i)
{
    id = i;
}
void Producto::setNombre(string n)
{
    nombre = n;
}
void Producto::setDescripcion(string d)
{
    descripcion = d;
}
void Producto::setCantidad(int c)
{
    cantidad = c;
}
void Producto::setPrecio(float p)
{
    precio = p;
}
void Producto::setEstado(char e)
{
    estado = e;
}