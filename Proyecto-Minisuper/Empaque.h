#pragma once
#include "Carne.h"

class Empaque {
private:
	bool tripa;
public:
	Empaque(bool);
	virtual ~Empaque();

	bool getTripa();
	void setTripa(bool);



	string toString();

};