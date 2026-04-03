#pragma once
#include <iostream>
#include <sstream>
#include "Fecha.h"
using namespace std;

class Perecedero {
private:
	Fecha* fecha_vencimiento;
public:
	//constructor
	Perecedero(int, int, int);

	//destructor
	virtual ~Perecedero();

	//accesores
	Fecha* getFecha_Vencimiento();

	//mutadores
	void setFecha_Vencimiento(Fecha*);

};