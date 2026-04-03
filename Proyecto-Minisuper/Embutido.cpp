#include "Embutido.h"

Embutido::Embutido(string cod, string nomCom, string desc, double preCost, string cat, int exis, int lim, int dIng, int mIng, int aIng, bool nac, double pes, int dVen, int mVen, int aVen, string nomAnim, string partAnim, string mar, bool tri)
    : Carne(cod, nomCom, desc, preCost, cat, exis, lim, dIng, mIng, aIng, nac, pes, dVen, mVen, aVen, nomAnim, partAnim), marca(mar)
{
    ptrEmpaque = new Empaque(tri);
}

Embutido::~Embutido()
{
}

string Embutido::getMarca() { return marca; }

void Embutido::setEmbutido(string mar) { marca = mar; }

string Embutido::getCodigo() const
{
    return codigo;
}

void Embutido::setCodigo(string cod)
{
    codigo = cod;
}

string Embutido::toString()
{
    stringstream s;
    s << "La marca del embutido es: " << marca << endl;
    s << ptrEmpaque->toString();
    return s.str();
}
