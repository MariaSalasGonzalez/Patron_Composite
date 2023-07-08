#include "Composite.h"

Composite::Composite() {
	tam = 10;
	can = 0;
	vec = new Componente*[tam];
	for (int i = 0; i < tam; i++)
		vec[i] = NULL;
}

Composite:: ~Composite() {
	for (int i = 0; i < can; i++)
		delete vec[i];
	delete[]vec;
}

string Composite::toString() const {
	stringstream s;
	for (int i = 0; i < can; i++)
		s << vec[i]->toString() << endl;
	return s.str();

}