#include "Empaque.h"

Empaque::Empaque(bool tri) : tripa(tri)
{}

Empaque::~Empaque() {}

bool Empaque::getTripa() {return tripa;}

void Empaque::setTripa(bool tri) { tripa = tri; }



string Empaque::toString()
{
    stringstream s;
    if (tripa) {
        s << "El embutido tiene empaque de tripa " << endl;
    }
    else {
        s << "El embutido no tiene empaque de tripa " << endl;
    }
    return s.str();
}
