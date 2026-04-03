#pragma once
#include "Decorador-Abstracto.h"
#include "Embutido.h"

class DecoEmbutido : public DecoAbstracto {
private:
	Embutido* ptrEmbutido;
public:
	DecoEmbutido(Compra* compra, Embutido* embutido);
	virtual ~DecoEmbutido();

	virtual string getNombreComercial();
	virtual string getCodigo();
	virtual double getCosto();

	virtual string toString();
};