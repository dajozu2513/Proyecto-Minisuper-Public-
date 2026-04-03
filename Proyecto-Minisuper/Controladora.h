#pragma once
#include "Minisuper.h"
#include "Interfaz.h"
using namespace std;

class Controladora {
private:
	int op;
	Minisuper* supercito;
public:
	Controladora();
	virtual ~Controladora();
	void controlPrincipal();

	void mantenimiento();
	void ventas();
	void reportes();

	void mantenimientoFacturas();
	void mantenimientoProductos();
	
};