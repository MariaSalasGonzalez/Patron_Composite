#pragma once
#include "Componente.h"

class Caracter : public Componente {
private:
	string nombre;
	double precio;
public:
	Caracter() : Componente() { //constructor predeterminado
		nombre = "";
		precio = 200;
	}

	Caracter(string nom, double pre) : 
		Componente(), 
		nombre(nom),
	    precio(pre){
	}

	virtual ~Caracter() {

	}

	double obtenerPrecio()const {
		return precio;
	}

	string toString() const {
		stringstream s;
		s << "Caracter = " << nombre << " y valgo " << precio << endl;
		return s.str();
	}

	virtual void agregar(Componente*) {
		//throw......
	}
};
