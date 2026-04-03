#pragma once
#include <iostream>
#include <sstream>

using namespace std;

template<class T>
class Nodo {
private:
	Nodo<T>* siguiente;
	T* info;
public:

	//constructor
	Nodo(T&, Nodo<T>*);
	//destructor
	virtual ~Nodo();
	//gets
	Nodo<T>* getSiguienteNodo() const;
	T* getInfo() const;
	//sets
	void setInfo(T*);
	void setSiguienteNodo(Nodo<T>* n);
};

template<class T>
Nodo<T>::Nodo(T& inf, Nodo<T>* sig) :
	siguiente(sig), info(&inf){}

template<class T>
Nodo<T>::~Nodo()
{
	if (info) { delete info; }
}

template<class T>
Nodo<T>* Nodo<T>::getSiguienteNodo() const
{
	return siguiente;
}

template<class T>
T* Nodo<T>::getInfo() const
{
	return info;
}

template<class T>
void Nodo<T>::setInfo(T* inf)
{
	info = inf;
}

template<class T>
void Nodo<T>::setSiguienteNodo(Nodo<T>* n)
{
	siguiente = n;
}
