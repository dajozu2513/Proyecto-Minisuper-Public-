#pragma once
#include "Decorador-Abstracto.h"
#include "Prod-Conserva.h"

class DecoProdConserva : public DecoAbstracto {
private:
	ProdConserva* ptrProdConserva;
public:
	DecoProdConserva(Compra* compra, ProdConserva* prodConserva);
	virtual ~DecoProdConserva();

	virtual string getNombreComercial();
	virtual string getCodigo();
	virtual double getCosto();

	virtual string toString();
};