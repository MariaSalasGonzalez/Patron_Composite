#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Componente { //Interfaz <<Abstract>>
public:
	Componente(){}
	virtual ~Componente(){}
	virtual string toString() const = 0;
	virtual double obtenerPrecio() const = 0;
	virtual void agregar(Componente*) = 0;
};

