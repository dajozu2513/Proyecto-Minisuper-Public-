#include "Abarrote.h"

Abarrote::Abarrote(string cod, string nomCom, string desc, double preCost, string cat, int exis, int lim, int dIng, int mIng, int aIng, bool nac, double pes, int dVen, int mVen, int aVen, string empNom)
    : ProdPerecedero(cod, nomCom, desc, preCost, cat, exis, lim, dIng, mIng, aIng, nac, pes, dVen, mVen, aVen), empresaNombre(empNom)
{}

Abarrote::~Abarrote() {}

//getters
string Abarrote::getEmpresaNom() { return empresaNombre; }
//setters
void Abarrote::setEmpresaNom(string empNom) { empresaNombre = empNom; }

string Abarrote::getCodigo() const
{
    return codigo;
}

void Abarrote::setCodigo(string cod)
{
    codigo = cod;
}

string Abarrote::toString()
{
    stringstream s;
    s << "El nombre de la Empresa del producto es: " << empresaNombre << endl;
    return s.str();
}
