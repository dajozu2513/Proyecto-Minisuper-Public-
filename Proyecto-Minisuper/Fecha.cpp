#include "Fecha.h"

Fecha::Fecha() : dia(0), mes(0), ano(0) {}

Fecha::Fecha(int d, int m, int a) : dia(d), mes(m), ano(a) {}

Fecha::~Fecha() {}

int Fecha::getDia() { return dia; }

int Fecha::getMes() { return mes; }

int Fecha::geAno() { return ano; }

void Fecha::setDia(int d) { dia = d; }

void Fecha::setMes(int m) { mes = m; }

void Fecha::setAno(int a) { ano = a; }

string Fecha::toString()
{
    stringstream s;
    s << dia << "/" << mes << "/" << ano << endl;
    return s.str();
}
