#include "Carne.h"

Carne::Carne(string cod, string nomCom, string desc, double preCost, string cat, int exis, int lim, int dIng, int mIng, int aIng, bool nac, double pes, int dVen, int mVen, int aVen, string nomAnim, string partAnim)
    : ProdPerecedero(cod, nomCom, desc, preCost, cat, exis, lim, dIng, mIng, aIng, nac, pes, dVen, mVen,aVen), nombreAnimal(nomAnim), parteDelAnimal(partAnim)
{}

Carne::~Carne() {}

string Carne::getNombreAnimal() { return nombreAnimal; }


void Carne::setNombreAnimal(string nomAnim) { nombreAnimal = nomAnim; }


string Carne::getParteDelAnimal(){return parteDelAnimal;}

void Carne::setParteDelAnimal(string partAnim) { parteDelAnimal = partAnim; }

string Carne::getCodigo() const
{
    return codigo;
}

void Carne::setCodigo(string cod)
{
    codigo = cod;
}

string Carne::toString()
{
    stringstream s;
    s << "El nombre del Animal del producto es: " << nombreAnimal << endl;
    s << "La parte del Animal del producto es: " << nombreAnimal << endl;
    return s.str();
}
