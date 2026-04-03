#include "Factura.h"
/*	int numeroFactura;
	int cantProdComprados;*/
Factura::Factura(int NF, string cedClient, string nomClient, int cantP, int d, int m, int a, DecoAbstracto* da):
	numeroFactura(NF), iva(0), totalPagar(0)
{
	ptrVenta = new Venta(cedClient, nomClient, cantP, d, m, a, da);
}

Factura::~Factura()
{
	if (ptrVenta)delete ptrVenta;
}

int Factura::getNumeroFactura()
{
	return numeroFactura;
}


double Factura::getIVA()
{
	return iva;
}

double Factura::getTotalPagar() const
{
	return totalPagar;
}

void Factura::setNumeroFactura(int NF)
{
	numeroFactura = NF;
}

void Factura::setIVA(double i)
{
	iva = i;
}

void Factura::setTotalPagar(double tp)
{
	totalPagar = tp;
}

void Factura::setVenta(Venta* v)
{
	ptrVenta = v;
}

Venta* Factura::getVenta() const
{
	return ptrVenta;
}


bool Factura::operator==(const Factura& otro)
{
	return numeroFactura == otro.numeroFactura;
}

bool Factura::operator<(const Factura& otro)
{
	return totalPagar < otro.totalPagar;
}

ostream& operator<<(ostream& out, Factura& f)
{
	return out << f.toString();
}

string Factura::toString() const
{
	stringstream s;
	s << "--------Factura--------" << endl
		<< "El numero de factura es: " << numeroFactura << endl
		<< ptrVenta->toString() << endl;
	return s.str();
}


