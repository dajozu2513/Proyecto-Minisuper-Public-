#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class excepcionRango {
public:
	virtual string toString() = 0;
};

class excepcionRangoInferior : public excepcionRango {
public:
	string toString();
};

class excepcionRangoSuperior : public excepcionRango {
public:
	string toString();
};

class excepcionValor {
public:
	virtual string toString();
};

class excepcionProducto {
public:
	virtual string toString();
};

class excepcionfueraDeRango {
public:
	virtual string toString();
};