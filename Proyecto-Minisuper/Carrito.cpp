#include "Carrito.h"

Carrito::Carrito(void)
{
}

Carrito::~Carrito(void)
{
}

string Carrito::toString()
{
	stringstream s;
	s << "\n\t\t Carrito \t\t" << endl;
	return s.str();
}

string Carrito::getNombreComercial()
{
	return "";
}

string Carrito::getCodigo()
{
	return "";
}

double Carrito::getCosto()
{
	return 0.0;
}
