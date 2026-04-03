#pragma once
#include "Nodo.h"
#include "Embutido.h";
#include "Prod-Conserva.h";
#include "Abarrote.h";

template<class T>
class Lista {
private:
	Nodo<T>* ppio;
public:
	Lista();
	virtual ~Lista();
	bool esVacio();

	//Mantenimiento
	bool agregar(T*);
	bool eliminarProducto(string cod);
	bool modificarProducto(string cod, double nuevcost, int nuevExist);
	T* buscaProducto(string cod);


	//Ventas
	bool eliminarFactura(int numeroFact);
	bool modificarFactura(int numeroFact, T* info);
	T* buscaFactura(int numeroFact);

	//Reportes
	string toString(); // Reporte 1

	string imprimeSoloEmbutidos();
	string imprimeSoloAbarrote();
	string imprimeSoloProdConserva();

	string minimoExistencia();

	string facturasCliente(string);

	string cincoMejoresClientes();


};

template<class T>
Lista<T>::Lista()
{
	ppio = nullptr;
}


template<class T>
Lista<T>::~Lista()
{
}

template<class T>
bool Lista<T>::esVacio()
{
	return (ppio == nullptr);
}

//---------------------------------------------------------------------------------------------
//Mantenimiento
template<class T>
bool Lista<T>::agregar(T* info)
{
	Nodo<T>* aux = ppio;
	if (esVacio()) {
		ppio = new Nodo<T>(*info, nullptr);
		return true;
	}
	else {
		while (aux->getSiguienteNodo() != nullptr) {
			aux = aux->getSiguienteNodo();
		}
		aux->setSiguienteNodo(new Nodo<T>(*info, nullptr));
		return true;
	}
	return false;
}

template<class T>
bool Lista<T>::eliminarProducto(string cod)
{
	Nodo<T>* aux = ppio;
	Nodo<T>* anterior = nullptr;
	if (!esVacio() && aux->getInfo()->getCodigo() == cod) {
		Nodo<T>* auxual = ppio;
		if (!esVacio()) {
			aux = auxual->getSiguienteNodo();
			delete auxual;
			return true;
		}
		
	}
	else {
		if (!esVacio()) {
			while (aux != nullptr && aux->getInfo()->getCodigo() != cod) {
				anterior = aux;
				aux = aux->getSiguienteNodo();
			}
			anterior->setSiguienteNodo(aux->getSiguienteNodo());
			delete aux;
			return true;
		}
	}
	return false;
}

template<class T>
bool Lista<T>::modificarProducto(string cod, double nuevcost, int nuevExist)
{
	Nodo<T>* aux = ppio;
		while (aux != nullptr) {
			if (aux->getInfo()->getCodigo() == cod) {
				aux->getInfo()->setPrecioCosto(nuevcost);
				aux->getInfo()->setExistencia(nuevExist);
					return true;
			}
			aux = aux->getSiguienteNodo();
		}
	return false;
}

template<class T>
T* Lista<T>::buscaProducto(string cod)
{
	Nodo<T>* aux = ppio;
	if (!esVacio()) {
		while (aux != nullptr) {
			if (aux->getInfo()->getCodigo() == cod) {
				return aux->getInfo();
			}
			aux = aux->getSiguienteNodo();
		}
	}
	return nullptr;
}

//---------------------------------------------------------------------------------------------
//Ventas
template<class T>
bool Lista<T>::eliminarFactura(int numeroFact)
{
	Nodo<T>* aux = ppio;
	Nodo<T>* anterior = nullptr;
	if (!esVacio() && aux->getInfo()->getNumeroFactura() == numeroFact) {
		Nodo<T>* auxual = ppio;
		if (!esVacio()) {
			aux = auxual->getSiguienteNodo();
			delete auxual;
			return true;
		}

	}
	else {
		if (!esVacio()) {
			while (aux != nullptr && aux->getInfo()->getNumeroFactura() != numeroFact) {
				anterior = aux;
				aux = aux->getSiguienteNodo();
			}
			anterior->setSiguienteNodo(aux->getSiguienteNodo());
			delete aux;
			return true;
		}
	}
	return false;
}

template<class T>
bool Lista<T>::modificarFactura(int numeroFact, T* info)
{
	Nodo<T>* aux = ppio;
	if (!esVacio()) {
		if (ppio->getInfo()->getNumeroFactura() == numeroFact) {
			ppio->setInfo(info);
			return true;
		}
		while (aux != nullptr) {
			if (aux->getInfo()->getNumeroFactura() == numeroFact) {
				aux->setInfo(info);
				return true;
			}
			aux = aux->getSiguienteNodo();
		}
	}
	return false;
}

template<class T>
T* Lista<T>::buscaFactura(int numeroFact)
{
	Nodo<T>* aux = ppio;
	if (!esVacio()) {
		while (aux != nullptr) {
			if (aux->getInfo()->getNumeroFactura() == numeroFact) {
				return aux->getInfo();
			}
			aux = aux->getSiguienteNodo();
		}
	}
	return nullptr;

}

//---------------------------------------------------------------------------------------------
//Reporte

template<class T>
string Lista<T>::toString()
{
	stringstream s;
	Nodo<T>* aux = ppio;
	while (aux != nullptr) {
		s << aux->getInfo() << endl;
		aux = aux->getSiguienteNodo();
		s << endl;
	}
	return s.str();
}

template<class T>
string Lista<T>::imprimeSoloEmbutidos()
{
	stringstream s;
	Nodo<T>* aux = ppio;
	while (aux != nullptr) {
		Embutido* ptrEmbutido = dynamic_cast<Embutido*>(aux);
		if (ptrEmbutido) {
			s << aux->getInfo() << endl;
			s << endl;
		}
		aux = aux->getSiguienteNodo();
	}
	return s.str();
}

template<class T>
string Lista<T>::imprimeSoloAbarrote()
{
	stringstream s;
	Nodo<T>* aux = ppio;
	while (aux != nullptr) {
		Abarrote* ptrAbarrote = dynamic_cast<Abarrote*>(aux);
		if (ptrAbarrote) {
			s << aux->getInfo() << endl;
			s << endl;
		}
		aux = aux->getSiguienteNodo();
	}
	return s.str();
}

template<class T>
string Lista<T>::imprimeSoloProdConserva()
{
	stringstream s;
	Nodo<T>* aux = ppio;
	while (aux != nullptr) {
		ProdConserva* ptrConserva = dynamic_cast<ProdConserva*>(aux);
		if (ptrConserva) {
			s << aux->getInfo() << endl;
			s << endl;
		}
		aux = aux->getSiguienteNodo();
	}
	return s.str();
}

template<class T>
string Lista<T>::minimoExistencia()
{
	stringstream s;
	Nodo<T>* aux = ppio;
	while (aux != nullptr) {
		if (aux->getInfo()->getExistencia() < aux->getInfo()->getLimite()) {
			s << aux->getInfo() << endl;
			s << endl;
		}
		aux = aux->getSiguienteNodo();
	}
	return s.str();
}

template<class T>
string Lista<T>::facturasCliente(string ced)
{
	stringstream s;
	Nodo<T>* aux = ppio;
	while (aux != nullptr) {
		if (aux->getInfo()->getVenta()->getCedulaCliente() == ced) {
			s << aux->getInfo() << endl;
			s << endl;
		}
		aux = aux->getSiguienteNodo();
	}
	return s.str();
}

template<class T>
string Lista<T>::cincoMejoresClientes()
{
	stringstream s;
	Nodo<T>* aux = ppio;
	while (aux->getSiguienteNodo()) {
		Nodo<T>* NodoMenor = aux;
		Nodo<T>* proxNodo = aux->getSiguienteNodo();
		while (proxNodo) {
			if (proxNodo->getInfo()->getTotalPagar() < NodoMenor->getInfo()->getTotalPagar()) {
				NodoMenor = proxNodo;
			}
			proxNodo = proxNodo->getSiguienteNodo();
		}
		//Intercambiando los datos
		T* temporal = aux->getInfo();
		aux->setInfo(NodoMenor->getInfo());
		NodoMenor->setInfo(temporal);
		aux = aux->getSiguienteNodo();

	}
	aux = ppio;
	for (int i = 0; i < 5; i++) {
		s << aux->getInfo() << endl;
		aux = aux->getSiguienteNodo();
		s << endl;
	}
	return s.str();
}



