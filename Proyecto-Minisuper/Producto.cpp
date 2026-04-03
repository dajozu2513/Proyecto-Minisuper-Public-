#include "Producto.h"
/*	string codigo;
	string nombreComercial;
	string descripcion;
	double precioCosto;
	string categoria;
	int existencia;
	int limite;*/
Producto::Producto(string cod, string nomCom, string desc, double preCost, string cat, int exis, int lim, int d, int m, int a) :
	codigo(cod), nombreComercial(nomCom), descripcion(desc), precioCosto(preCost), categoria(cat), existencia(exis), limite(lim)
{
	fecha_ingreso = new Fecha(d, m, a);
}

Producto::~Producto()
{
}

//getters
string Producto::getCodigo() const { return codigo; }
string Producto::getNombreComercial() { return nombreComercial; }
string Producto::getDescripcion() { return descripcion; }
double Producto::getPrecioCosto() { return precioCosto; }
string Producto::getCategoria() { return categoria; }
int Producto::getExistencia() const { return existencia; }
int Producto::getLimite() const { return limite; }

//setters
void Producto::setCodigo(string cod) { codigo = cod; }
void Producto::setNombreComercial(string nomCom) { nombreComercial = nomCom; }
void Producto::setDescripcion(string desc) { descripcion = desc; }
void Producto::setPrecioCosto(double preCost) { precioCosto = preCost; }
void Producto::setCategoria(string cat) { categoria = cat; }
void Producto::setExistencia(int exis) { existencia = exis; }
void Producto::setLimite(int lim) { limite = lim; }

bool Producto::operator==(const Producto& otro)
{
	return codigo == otro.codigo;
}

bool Producto::operator<(const Producto& otro)
{
	return existencia < otro.limite;
}

ostream& operator<<(ostream& out, Producto& p)
{
	return out << p.toString();
}

string Producto::toString() const {
	stringstream s;
	s << "--------PRODUCTO--------" << endl
		<< "El codigo del producto es: " << codigo << endl
		<< "El nombre comercial del producto es: " << nombreComercial << endl
		<< "La descripcion del producto es: " << descripcion << endl
		<< "El precio costo del producto es: " << precioCosto << endl
		<< "La categoria del producto es: " << categoria << endl
		<< "El existencia del producto es: " << existencia << endl
		<< "El limite del producto es: " << limite << endl
		<< "La fecha de ingreso es: " << fecha_ingreso->toString() << endl;
	return s.str();
}


