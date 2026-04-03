#pragma once
#include "Venta.h"
using namespace std;

class Factura {
private:
	int numeroFactura;
	Venta* ptrVenta;
	double iva;
	double totalPagar;
public:
	Factura(int, string, string, int, int, int, int, DecoAbstracto*);
	virtual ~Factura();

	int getNumeroFactura();
	double getIVA();
	double getTotalPagar() const;


	void setNumeroFactura(int);
	void setIVA(double);
	void setTotalPagar(double);
	
	Venta* getVenta() const;
	void setVenta(Venta*);

	//Sobrecarga
	bool operator==(const Factura&);
	friend ostream& operator << (ostream&, Factura&);
	bool operator<(const Factura&);

	//toString
	string toString() const;

};