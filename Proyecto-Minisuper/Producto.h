#pragma once
#include <iostream>
#include <sstream>
#include "Fecha.h"

using namespace std;

class Producto {
protected:
	string codigo;
	string nombreComercial;
	string descripcion;
	double precioCosto;
	string categoria;
	int existencia;
	int limite;
	Fecha* fecha_ingreso;
public:
	//constructor
	Producto(string, string, string, double, string, int, int, int, int, int);
	//destructor
	~Producto();
	//gets
	string getCodigo() const;
	string getNombreComercial();
	string getDescripcion();
	double getPrecioCosto();
	string getCategoria();
	int getExistencia() const;
	int getLimite() const;
	//sets
	void setCodigo(string);
	void setNombreComercial(string);
	void setDescripcion(string);
	void setPrecioCosto(double);
	void setCategoria(string);
	void setExistencia(int);
	void setLimite(int);

	//Sobrecarga
	bool operator==(const Producto&);
	friend ostream& operator << (ostream&, Producto&);
	bool operator<(const Producto&);

	//toString
	virtual string toString() const;


};