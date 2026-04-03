#include "Prod-Perecedero.h"

ProdPerecedero::ProdPerecedero(string cod, string nomCom, string desc, double preCost, string cat, int exis, int lim, int dIng, int mIng, int aIng, bool nac, double pes, int dVen, int mVen, int aVen)
	: Producto(cod, nomCom, desc, preCost, cat, exis, lim, dIng, mIng, aIng), nacional(nac), peso(pes)
{
	ptrPerecedero = new Perecedero(dVen, mVen, aVen);
}

ProdPerecedero::~ProdPerecedero()
{
}
//getters
bool ProdPerecedero::getNacional() { return nacional; }
double ProdPerecedero::getPeso() { return peso; }
//setters
void ProdPerecedero::setNacional(bool nac) { nacional = nac; }
void ProdPerecedero::setPeso(double pes) { peso = pes; }

string ProdPerecedero::getCodigo() const
{
	return codigo;
}

void ProdPerecedero::setCodigo(string cod)
{
	codigo = cod;
}

string ProdPerecedero::toString()
{
	stringstream s;
	s << "El producto es nacional o no: " << nacional << endl
		<< "El peso del producto es: " << peso << endl
		<< "La fecha de vencimeinto es: " << ptrPerecedero->getFecha_Vencimiento()->toString() << endl;
	return s.str();
}
