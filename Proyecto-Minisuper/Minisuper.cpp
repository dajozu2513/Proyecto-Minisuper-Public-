#include "Minisuper.h"

Minisuper::Minisuper()
{
    nombreEmpresa = "";
    cedulaJuridica = "";
    listaProductos = new Lista<Producto>();
    listaFacturas = new Lista<Factura>();
}

Minisuper::~Minisuper()
{
    delete listaProductos;
    delete listaFacturas;
}

string Minisuper::getNombreEmpresa(){return nombreEmpresa;}

string Minisuper::getCedulaJuridica(){return cedulaJuridica;}

Lista<Producto>* Minisuper::getListaProductos(){return listaProductos;}

Lista<Factura>* Minisuper::getListaFacturas(){return listaFacturas;}

bool Minisuper::ingresarProducto(Producto* prod){
    return listaProductos->agregar(prod);
    
}

bool Minisuper::ingresarFactura(Factura* fact){
    return listaFacturas->agregar(fact);
}

Producto* Minisuper::buscaProducto(string cod)
{
    return listaProductos->buscaProducto(cod);
}

Factura* Minisuper::buscaFactura(int numeroFact)
{
    return listaFacturas->buscaFactura(numeroFact);
}
