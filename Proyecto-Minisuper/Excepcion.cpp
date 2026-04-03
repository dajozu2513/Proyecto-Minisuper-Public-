#include "Excepcion.h"

string excepcionRangoInferior::toString() {
	stringstream s;
	s << ">>ERROR<<" << endl << endl;
	s << "   El valor dijitado es menor al minimo permitido." << endl;
	s << "   Djite un valor dentro del rango del menu." << endl;
	return s.str();
}

string excepcionRangoSuperior::toString() {
	stringstream s;
	s << ">>ERROR<<" << endl << endl;
	s << "   El valor dijitado es mayor al minimo permitido." << endl;
	s << "   Djite un valor dentro del rango del menu." << endl;
	return s.str();
}

string excepcionValor::toString() {
	stringstream s;
	s << ">>ERROR<<" << endl << endl;
	s << "   El valor dijitado no es un numero entero." << endl;
	s << "   Djite un valor dentro del rango del menu." << endl;
	return s.str();
}

string excepcionProducto::toString() {
	stringstream s;
	s << ">>ERROR<<" << endl << endl;
	s << "   El texto dijitado no corresponde a una categoria de producto." << endl;
	s << "   Djite una categoria de producto" << endl;
	s << "   |conserva|abarrote|embutido|" << endl;
	return s.str();
}

string excepcionfueraDeRango::toString()
{
	stringstream s;
	s << ">>ERROR<<" << endl << endl;
	s << "   El valor dijitado esta fuera del rango del menu" << endl;
	s << "   Djite un valor dentro del rango del menu." << endl;
	return s.str();
}
