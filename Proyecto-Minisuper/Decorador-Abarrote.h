#pragma once
#include "Decorador-Abstracto.h"
#include "Abarrote.h"

class DecoAbarrote : public DecoAbstracto {
private:
	Abarrote* ptrAbarrote;
public:

	DecoAbarrote(Compra* compra, Abarrote* abarrote);
	virtual ~DecoAbarrote(); 

	virtual string getNombreComercial();
	virtual string getCodigo();
	virtual double getCosto();

	virtual string toString();
};