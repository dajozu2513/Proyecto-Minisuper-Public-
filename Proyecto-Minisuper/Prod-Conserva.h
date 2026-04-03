#pragma once
#include "Producto.h"

class ProdConserva : public Producto {
private:
	bool envasado;
public:
	ProdConserva(string, string, string, double, string, int, int, int, int, int, bool);
	virtual ~ProdConserva();
	bool getEnvasado();
	void setEnvasado(bool);
	string getCodigo() const;
	void setCodigo(string);
	string toString();
};