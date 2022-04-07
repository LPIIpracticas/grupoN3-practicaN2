#include "producto.h"
#include "producto.cpp"
#include "funcionesproducto.h"
#include "cliente.h"
#include "cliente.cpp"

int main()
{
    char resp = ' ';
    Cliente juan;
    juan.ingresar();
    int nro = 0;
    cout << "Ingresar el numero de Productos: ";
    cin >> nro;
    Producto *ptrArregloProductos = new Producto[nro];
    int i = 0;
    do
    {
        system("clear");
        do
        {
            cout << "Ingresar el numero de Productos a procesar: ";
            cin >> i;

            if (i < 0 || i > nro - 1)
                cout << "ERROR: No existe ese numero de producto(0-" << nro << ")..." << endl;
        } while (i < 0 || i > nro - 1);

        int opc = menu();
        ejecutaMetodos(opc, &ptrArregloProductos[i]);
        juan.comprar(&ptrArregloProductos[i]);
        juan.imprimir();
        system("pause");
        do
        {
            system("clear");
            cout << "Desea continuar?(s/n): ";
            cin >> resp;
            resp = tolower(resp);
            if (resp != 's' && resp != 'n')
                cout << "ERROR: Ingrese solo 's' o 'n'..." << endl;
        system("pause");
        } while (resp != 's' && resp != 'n');
    } while (resp == 's');

    return 0;
}