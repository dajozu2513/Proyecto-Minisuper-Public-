#pragma once
#include "Prod-Perecedero.h"

class Carne : public ProdPerecedero {
private:
	string nombreAnimal;
	string parteDelAnimal;
public:
	Carne(string, string, string, double, string, int, int, int, int, int, bool, double, int, int, int, string,string);
	virtual ~Carne();

	string getNombreAnimal();
	void setNombreAnimal(string);

	string getParteDelAnimal();
	void setParteDelAnimal(string);

	string getCodigo() const;
	void setCodigo(string);

	string toString();
};