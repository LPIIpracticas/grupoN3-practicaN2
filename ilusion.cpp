#include "ilusion.h"
#include "fecha.h"
#include "fecha.cpp"

void Ilusion::inicio()
{
    cout << "Ingrese el numero de razones: ";
    cin >> nroRazones;
    razon = new string[nroRazones];
    cin.ignore();
    for (int i = 0; i < nroRazones;i++)
    {
        cout << "Ingrese la razon: ";
        getline(cin, razon[i]);
    }
    cout << "Ingrese la fecha de inicio: ";
    fechaInicio.ingresar();
    cout << "Ingrese intensidad: ";
    cin >> intensidad;
}
void Ilusion::final()
{
    fechaFin.ingresar();
    intensidad = 0;
    delete []razon;
}
void Ilusion::aumentar()
{
    intensidad++;
}
void Ilusion::disminuir()
{
    intensidad--;
}
void Ilusion::decepcion()
{
    cout << "quiero morir..." << endl;
}
void Ilusion::confiar()
{
    cout << "pongolas manos al fuego..." << endl;
}
