#pragma once
#include "Carne.h"
#include "Empaque.h"

class Embutido : public Carne {
private:
	string marca;
	Empaque* ptrEmpaque;
public:
	Embutido(string, string, string, double, string, int, int, int, int, int, bool, double, int, int, int, string, string, string, bool);
	virtual ~Embutido();

	string getMarca();
	void setEmbutido(string);

	string getCodigo() const;
	void setCodigo(string);

	string toString();

};