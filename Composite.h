#pragma once
#include "Componente.h"

class Composite : public Componente { //<<Abstract>> //Aqui se da la composicion
protected:
	Componente** vec;
	int tam;
	int can;
public:
	Composite();
	virtual ~Composite();
	virtual double obtenerPrecio() const = 0;
	virtual void agregar(Componente*) = 0;
	virtual string toString()const;
	/*virtual Composite& operator = (const Composite&);
	virtual Componente* obtenerComponente()const;*/
};
