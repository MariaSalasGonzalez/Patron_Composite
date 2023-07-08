#pragma once
#include "Componente.h"

class Dibujo : public Componente {
private:
	string nombre;
	double precio;
public:
	Dibujo() : Componente() { //constructor predeterminado
		nombre = "";
		precio = 300;
	}

	Dibujo(string nom, double pre) :
		Componente(),
		nombre(nom),
		precio(pre) {
	}

	virtual ~Dibujo() {

	}

	double obtenerPrecio()const {
		return precio;
	}

	string toString() const {
		stringstream s;
		s << "Dibujo = " << nombre << " y valgo " << precio << endl;
		return s.str();
	}

	virtual void agregar(Componente*) {
		//throw......
	}

};

