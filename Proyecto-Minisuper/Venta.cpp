#include "Venta.h"
//string cedulaCliente;
//string nombreCliente;
//int cantProductos;
//Fecha* fechaActual;
//DecoAbstracto* decoabtracto;
Venta::Venta(string cedClient, string nomClient, int cantP, int d, int m, int a, DecoAbstracto* da) :
    cedulaCliente(cedClient), nombreCliente(nomClient), cantProductos(cantP)
{
    fechaActual = new Fecha(d, m, a);
    decoabstracto = da;

}

Venta::~Venta()
{
    if (fechaActual){ delete fechaActual; }
    if (decoabstracto) { delete decoabstracto; }
}

string Venta::getCedulaCliente() const { return cedulaCliente; }

string Venta::getNombreCliente(){return nombreCliente;}

int Venta::getCantProductos(){return cantProductos;}

void Venta::setCedulaCliente(string cedClient) { cedulaCliente = cedClient; }

void Venta::setNombreCliente(string nomClient) { nombreCliente = nomClient; }

void Venta::setCantProductos(int cantP) { cantProductos = cantP; }

bool Venta::operator==(const Venta& otro)
{
    return cedulaCliente == otro.cedulaCliente;
}

string Venta::toString()
{
    stringstream s;
    s << "La cedula del cliente es: " << cedulaCliente << endl
        << "El nombre del cliente es: " << nombreCliente << endl
        << "La cantidad de productos es: " << cantProductos << endl
        << "La fecha actual es: " << fechaActual->toString() << endl
        << "Carrito de compras: " << decoabstracto->toString() << endl;
    return s.str();
}
