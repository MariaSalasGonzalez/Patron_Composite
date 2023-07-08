#pragma once
#include "Composite.h"

class Oracion : public Composite {
private:
	string _descripcion;
	double _precio;
public:
	Oracion(string, double = 0.0);
	virtual ~Oracion();
	virtual string obtenerDescripcion()const;
	virtual double obtenerPrecio()const;
	virtual void agregar(Componente*);
	virtual string toString()const;
};

Oracion::Oracion(string des, double pre) :
	Composite(),
	_descripcion(des),
	_precio(pre) {
}

Oracion:: ~Oracion() {
	cout << "parte::~Oracion()" << endl;
}

string Oracion::obtenerDescripcion()const {
	return _descripcion;
}

double Oracion::obtenerPrecio()const {
	double r = _precio;
	for (int i = 0; i < can; i++)
		r += vec[i]->obtenerPrecio();
	return r;
}

void Oracion::agregar(Componente* ele) {
	vec[can++] = ele;
}

string Oracion::toString() const {
	stringstream r;
	r << "\n{";
	r << "Oracion: " << _descripcion << ", " << " Valor: " << _precio;
	for (int i = 0; i < can; i++)
		r << "\n" << vec[i]->toString() << endl;
	r << "}";
	return r.str();
}
