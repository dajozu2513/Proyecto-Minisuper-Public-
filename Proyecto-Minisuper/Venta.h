#pragma once
#include "Fecha.h"
#include "Decorador-Abstracto.h"

class Venta {
private: 
	string cedulaCliente;
	string nombreCliente;
	int cantProductos;
	Fecha* fechaActual;
	DecoAbstracto* decoabstracto;

public: 
	//constructor
	Venta(string, string, int, int,int,int, DecoAbstracto*);
	//destructor
	virtual ~Venta();
	//gets
	string getCedulaCliente() const;
	string getNombreCliente();
	int getCantProductos();
	//sets
	void setCedulaCliente(string);
	void setNombreCliente(string);
	void setCantProductos(int);

	//Sobrecarga
	bool operator==(const Venta&);

	string toString();
};