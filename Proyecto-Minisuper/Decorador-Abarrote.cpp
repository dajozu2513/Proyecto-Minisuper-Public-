#include "Decorador-Abarrote.h"

DecoAbarrote::DecoAbarrote(Compra* compra, Abarrote* abarrote)
{
	ptrCompra = compra;
	ptrAbarrote = abarrote;
}

DecoAbarrote::~DecoAbarrote()
{
	if (ptrAbarrote) delete ptrAbarrote;
}

string DecoAbarrote::getNombreComercial()
{
	return ptrAbarrote->getNombreComercial();
}

string DecoAbarrote::getCodigo()
{
	return ptrAbarrote->getCodigo();
}

double DecoAbarrote::getCosto()
{
	return ptrAbarrote->getPrecioCosto();
}

string DecoAbarrote::toString()
{
	stringstream s;
	s << "---------------Decorador Abarrote---------------" << endl;
	s << "Nombre: " << getNombreComercial();
	s << "Codigo: " << getCodigo();
	s << "Costo: " << getCosto();
	return s.str();
}
