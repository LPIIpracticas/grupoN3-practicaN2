//#pragma once

#include <string>
#include <iostream>

using namespace std;

#include "producto.h"
#include "producto.cpp"
void calcularValorProducto(Producto *ptrProducto)
{
    system("clear");
    cout << "Precio total del producto " << ptrProducto->getNombre() << ": ";
    ptrProducto->valorProducto();
    system("pause");
}
void funcionCambiarPrecioProducto(Producto *ptrProducto)
{
    float p = 0;
    system("clear");
    cout << "Ingrese nuevo precio de producto: ";
    cin >> p;
    ptrProducto->cambiarPrecio(p);
    system("pause");
}
void funcionCalcularIGV(Producto *ptrProducto)
{
    system("clear");
    cout << "IGV del Producto " << ptrProducto->getNombre() << endl;
    cout << "IGV: " << ptrProducto->calcularIGV() << endl;
    system("pause");
}
void funcionAumentar(Producto *ptrProducto)
{
    int n = 0;
    system("clear");
    cout << "Ingrese cantidad a aumentar en el stock: ";
    cin >> n;
    ptrProducto->aumentarStock(n);
    ptrProducto->imprimir();
}
void funcionDisminuir(Producto *ptrProducto)
{
    int n = 0;
    system("clear");
    cout << "Ingrese cantidad a disminuir en el stock: ";
    cin >> n;
    ptrProducto->disminuirStock(n);

    ptrProducto->imprimir();
}

int menu()
{
    int opc = 0;
    do
    {

        system("clear");
        cout << "\t\t\tMENU\n";
        cout << "\t\t\t====\n";
        cout << "1. INGRESAR DATOS DE PRODUCTO" << endl;
        cout << "2. AUMENTAR STOCK DE PRODUCTO" << endl;
        cout << "3. DISMINUIR STOCK DE PRODUCTO" << endl;
        cout << "4. CALCULAR IGV DE PRODUCTO" << endl;
        cout << "5. CAMBIAR PRECIO DE PRODUCTO" << endl;
        cout << "6. IMPRIMIR DATOS DE PRODUCTO" << endl;
        cout << "7. CALCULAR VALOR DE PRODUCTO EN ALMACEN" << endl;
        cout << "8. SALIR" << endl;
        cout << "Ingrese una opcion:(1-8): ";
        cin >> opc;
        if (opc < 1 || opc > 8)
        {
            system("clear");
            cout << "ERROR: eligio opcion no valida ingresar un valor entre(1-7)..." << endl;
            system("pause");
        }
    } while (opc < 1 || opc > 8);
    return opc;
}
void ejecutaMetodos(int opc, Producto *ptrProducto)
{
    int n = 0;

    switch (opc)
    {
    case 1:
        ptrProducto->ingresar();
        break;
    case 2:
        funcionAumentar(ptrProducto);
        break;
    case 3:
        funcionDisminuir(ptrProducto);
        break;
    case 4:
        funcionCalcularIGV(ptrProducto);
        break;
    case 5:
        funcionCambiarPrecioProducto(ptrProducto);
        break;
    case 6:
        ptrProducto->imprimir();
    case 7:
        calcularValorProducto(ptrProducto);
    }
}