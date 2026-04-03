#include "Decorador-Prod-Conserva.h"

DecoProdConserva::DecoProdConserva(Compra* compra, ProdConserva* prodConserva)
{
	ptrCompra = compra;
	ptrProdConserva = prodConserva;
}

DecoProdConserva::~DecoProdConserva()
{
	if (ptrProdConserva) delete ptrProdConserva;
}

string DecoProdConserva::getNombreComercial()
{
	return ptrProdConserva->getNombreComercial();
}

string DecoProdConserva::getCodigo()
{
	return ptrProdConserva->getCodigo();
}

double DecoProdConserva::getCosto()
{
	return ptrProdConserva->getPrecioCosto();
}

string DecoProdConserva::toString()
{
	stringstream s;
	s << "---------------Decorador Embutido---------------" << endl;
	s << "Nombre: " << getNombreComercial();
	s << "Codigo: " << getCodigo();
	s << "Costo: " << getCosto();
	return s.str();
}
