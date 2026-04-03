#pragma once
#include "Lista.h"
#include "Producto.h"
#include "Factura.h"
#include "Abarrote.h"
#include "Prod-Conserva.h"
#include "Embutido.h"
#include "Carrito.h"
#include "Decorador-Abarrote.h"
#include "Decorador-Embutido.h"
#include "Decorador-Prod-Conserva.h"

class Minisuper {
private:
	string nombreEmpresa;
	string cedulaJuridica;
	Lista<Producto>* listaProductos;
	Lista<Factura>* listaFacturas;
public:
	Minisuper();
	virtual ~Minisuper();


	string getNombreEmpresa();
	string getCedulaJuridica();
	Lista<Producto>* getListaProductos();
	Lista<Factura>* getListaFacturas();
	
	
	//ingresos
	bool ingresarProducto(Producto*);
	bool ingresarFactura(Factura*);
	Producto* buscaProducto(string cod);
	Factura* buscaFactura(int numeroFact);

};