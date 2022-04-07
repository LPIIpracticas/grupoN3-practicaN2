#pragma once
#include "producto.h"
#include "producto.cpp"
#include "cliente.h"
#include <string>
#include <iostream>

using namespace std;

// métodos de servicio
void Cliente::imprimir()
{
    system("clear");
    cout << "DATOS DE CLIENTE:" << endl;
    cout << "=================" << endl;
    cout << "DNI: " << DNI << endl;
    cout << "nombre: " << nombre << endl;
    cout << "direccion: " << direccion << endl;
    cout << "saldo: " << saldo << endl;
    cout << "celular: " << celular << endl;
    cout << "genero: " << genero << endl;
    cout << "producto: "<< idProducto->getNombre()<<endl;
    system("pause");
}
void Cliente::ingresar()
{
    system("clear");
    cout << "INGRESAR DATOS DE CLIENTE:" << endl;
    cout << "==========================" << endl;
    cout << "DNI: ";
    cin >> DNI;
    cin.ignore();
    cout << "nombre: ";
    getline(cin, nombre);
    cout << "direccion: ";
    getline(cin, direccion);
    cout << "saldo: ";
    cin >> saldo;
    cout << "celular: ";
    cin >> celular;
    cout << "genero: ";
    cin >> genero;
    idProducto = 0;
}
// interface de clase
void Cliente::comprar(Producto *producto)
{
    int cantidad = 0;
    idProducto = producto;
    cout << "ingrese la cantidad de Producto a comprar: ";
    cin >> cantidad;
    if (idProducto->getCantidad() >= cantidad)
    {
        saldo = idProducto->getPrecio() * cantidad;
        idProducto->disminuirStock(cantidad);
    }
}
void Cliente::devolver(Producto *producto)
{
    int cantidadComprada = 0;
    int cantidadDevuelta = 0;
    if (idProducto == producto)
    {
        cantidadComprada = saldo / idProducto->getPrecio();
        cout << "Ingrese cantidad a devolver: ";
        if (cantidadComprada >= cantidadDevuelta)
        {
            idProducto->aumentarStock(cantidadDevuelta);
            saldo = saldo - (idProducto->getPrecio() * cantidadDevuelta);
            if (cantidadComprada == cantidadDevuelta)
                idProducto = 0;
        }
    }
}
void Cliente::pagar(float p)
{
    if (saldo == p)
    {
        saldo = 0;
    }
    else
        cout << "ERROR: La cifra para pagar es incorrecta..." << endl;
}
void Cliente::amortizar(float p)
{
    if (saldo >= p)
    {
        saldo = saldo - p;
    }
    else
        cout << "ERROR: La cifra para amortizar es incorrecta..." << endl;
}

// getters
int Cliente::getDNI()
{
    return DNI;
}
string Cliente::getNombre()
{
    return nombre;
}
string Cliente::getDireccion()
{
    return direccion;
}
int Cliente::getCelular()
{
    return celular;
}
float Cliente::getSaldo()
{
    return celular;
}
char Cliente::getGenero()
{
    return genero;
}
// setters
void Cliente::setDNI(int i)
{
    DNI = i;
}
void Cliente::setNombre(string n)
{
    nombre = n;
}
void Cliente::setDireccion(string d)
{
    direccion = d;
}
void Cliente::setCelular(int c)
{
    celular = c;
}
void Cliente::setSaldo(float p)
{
    celular = p;
}
void Cliente::setGenero(char e)
{
    genero = e;
}