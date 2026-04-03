#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Fecha {
private:
	int dia;
	int mes;
	int ano;
public:
	//constructor
	Fecha();
	Fecha(int, int, int);

	//destructor
	virtual ~Fecha();

	//accesores
	int getDia();
	int getMes();
	int geAno();

	//mutadores
	void setDia(int);
	void setMes(int);
	void setAno(int);

	//toString
	string toString();

};