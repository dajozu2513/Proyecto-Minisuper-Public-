#pragma once
#include "Compra.h"

class DecoAbstracto : public Compra {
protected:
	Compra* ptrCompra; // puntero que sale del objeto hacia el otro decorador
public:
	virtual ~DecoAbstracto() {}
	virtual string toString() = 0;

	virtual string getNombreComercial() = 0;
	virtual string getCodigo() = 0;
	virtual double getCosto() = 0;
};
