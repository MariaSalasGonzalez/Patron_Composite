#include "Caracter.h"
#include "Dibujo.h"
#include "Frase.h"
#include "Oracion.h"
using namespace std;

int main() {
	cout << "Creacion de caracteres......" << endl;
	Componente* c1 = new Caracter("Espacio", 50);
	Componente* c2 = new Caracter("Asterisco", 40);
	Componente* c3 = new Caracter("Pregunta", 30);
	Componente* c4 = new Caracter("Admiracion", 20);
	Componente* c5 = new Caracter("Negacion", 10);

	Componente* d1 = new  Dibujo("Circulo", 100);
	Componente* d2 = new  Dibujo("Cuadrado", 200);
	Componente* d3 = new  Dibujo("Elipse", 300);
	Componente* d4 = new  Dibujo("Rectangulo", 400);
	Componente* d5 = new  Dibujo("Rombo", 500);

	cout << "Construyendo las dos frases...." << endl;
	Componente* Fra1 = new Frase("Frase Inicial", 1000);
	Componente* Fra2 = new Frase("Frase Final", 2000);

	cout << "Ingreso de elementos a dos Frases" << endl;
	Fra1->agregar(c1);
	Fra1->agregar(c2);
	Fra1->agregar(c3);

	Fra2->agregar(c4);
	Fra2->agregar(c5);

	cout << "--Visualizar de que se tratan esas frases--" << endl;
	cout << Fra1->toString()<<endl;
	cout << "El valor de la frase1 es de: " << Fra1->obtenerPrecio() << "colones." << endl;

	cout << "----------------ORACION-----------------" << endl;
	cout << "Creando una oracion" << endl;
	Componente* Ora1 = new Oracion("Capitulo-1", 3000);
	cout << "A la oracion yo le puedo incluir carcater - dibujo - frase" << endl;
	Ora1->agregar(d1);
	Ora1->agregar(d2);
	Ora1->agregar(Fra1);
	Ora1->agregar(Fra2);
	Ora1->agregar(d3);
	cout << "Podemos ver lo que tiene Oracion--- Ora1.." << endl;
	cout << Ora1->toString() << endl;
	cout << "El precio final de la oracion....ora1 es de: "<<Ora1->obtenerPrecio() << endl;

	system("pause");
	return 0;
}