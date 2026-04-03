#pragma once
#include "Compra.h"

class Carrito : public Compra {
public:
	Carrito(void);
	virtual ~Carrito(void);
	virtual string toString();
	virtual string getNombreComercial();
	virtual string getCodigo();
	virtual double getCosto();
};