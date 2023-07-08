#pragma once
#include "Composite.h"

class Frase : public Composite {
private:
	string _descripcion;
	double _precio;
public:
	Frase(string, double = 0.0);
	virtual ~Frase();
	virtual string obtenerDescripcion()const;
	virtual double obtenerPrecio()const;
	virtual void agregar(Componente*);
	virtual string toString()const;
};

Frase::Frase(string des, double pre):
	 Composite(),
    _descripcion(des),
    _precio(pre){
}

Frase:: ~Frase() {
	cout << "parte::~Frase()" << endl;
}

string Frase::obtenerDescripcion()const {
	return _descripcion;
}

double Frase::obtenerPrecio()const {
	double r = _precio;
	for (int i = 0; i < can; i++)
		r += vec[i]->obtenerPrecio();
	return r;
}

void Frase::agregar(Componente* ele) {
	vec[can++] = ele;
}

string Frase::toString() const {
	stringstream r;
	r << "\n{";
	r << "Frase: " << _descripcion << ", " << " Valor: "<<_precio;
	for (int i = 0; i < can; i++)
		r << "\n" << vec[i]->toString() << endl;
	r << "}";
	return r.str();
}