#include "Decorador-Embutido.h"

DecoEmbutido::DecoEmbutido(Compra* compra, Embutido* embutido)
{
	ptrCompra = compra;
	ptrEmbutido = embutido;
}

DecoEmbutido::~DecoEmbutido()
{
	if (ptrEmbutido)delete ptrEmbutido;
}

string DecoEmbutido::getNombreComercial()
{
	return ptrEmbutido->getNombreComercial();
}

string DecoEmbutido::getCodigo()
{
	return ptrEmbutido->getCodigo();
}

double DecoEmbutido::getCosto()
{
	return ptrEmbutido->getPrecioCosto();
}

string DecoEmbutido::toString()
{
	stringstream s;
	s << "---------------Decorador Embutido---------------" << endl;
	s << "Nombre: " << getNombreComercial();
	s << "Codigo: " << getCodigo();
	s << "Costo: " << getCosto();
	return s.str();
}
