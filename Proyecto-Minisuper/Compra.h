#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Compra {
public:
	virtual ~Compra() {}
	virtual string toString() = 0;
	virtual string getNombreComercial() = 0;
	virtual string getCodigo() = 0;
	virtual double getCosto() = 0;
};