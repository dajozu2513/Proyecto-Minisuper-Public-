#include "Prod-Conserva.h"

ProdConserva::ProdConserva(string cod, string nomCom, string desc, double preCost, string cat, int exis, int lim, int dIng, int mIng, int aIng, bool env)
	: Producto(cod, nomCom, desc, preCost, cat, exis, lim, dIng, mIng, aIng), envasado(env)
{
}

ProdConserva::~ProdConserva()
{}

bool ProdConserva::getEnvasado() { return envasado; }
void ProdConserva::setEnvasado(bool env) { envasado = env; }

string ProdConserva::getCodigo() const
{
    return codigo;
}

void ProdConserva::setCodigo(string cod)
{
    codigo = cod;
}

string ProdConserva::toString()
{
	stringstream s;
    if (envasado) {
        s << "El producto esta envasado " << endl;
    }
    else {
        s << "El producto no esta envasado " << endl;
    }
	return s.str();
}