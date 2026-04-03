#pragma once
#include "Producto.h"
#include "Perecedero.h"

class ProdPerecedero : public Producto {
private:
	bool nacional;
	double peso;
	Perecedero* ptrPerecedero;
public:
	ProdPerecedero(string, string, string, double, string, int, int, int, int, int, bool, double, int, int, int);
	virtual ~ProdPerecedero();
	bool getNacional();
	double getPeso();
	void setNacional(bool);
	void setPeso(double);
	string getCodigo() const;
	void setCodigo(string);
	virtual string toString();
};

