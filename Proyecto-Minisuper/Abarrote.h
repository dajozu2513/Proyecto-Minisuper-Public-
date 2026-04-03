#pragma once
#include "Prod-Perecedero.h"

class Abarrote : public ProdPerecedero {
private:
	string empresaNombre;
public:
	Abarrote(string, string, string, double, string, int, int, int, int, int, bool, double, int, int, int, string);
	virtual ~Abarrote();

	string getEmpresaNom();
	void setEmpresaNom(string);

	string getCodigo() const;
	void setCodigo(string);

	string toString();
};