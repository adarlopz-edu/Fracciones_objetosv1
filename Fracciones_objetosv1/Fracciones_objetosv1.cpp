//LOPEZ LOPEZ BRANDON ADAIR
//22100190

#include <iostream>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

void ingresoDeDatos(); //Inicializo la funcion desde aqui para usarla en la funcion intro
string sharedata(int, int);

class Fraccion {
private:
	int numerador;
	int denominador;

public:
	Fraccion(int, int);
	void suma();

};


void intro() {

	cout << "FRACCIONES CON OBJETOS" << endl << endl;
	cout << "Seleccione una operacion" << endl;
	cout << "1. Suma" << endl << "2. Resta" << endl << "3. Multiplicacion" << endl << "4. Division" << endl;

	while (1) {
		switch (char tipoOperacion = _getch()) {
		case '1':
			cout << endl << "Suma" << endl;
			ingresoDeDatos();

			break;
		case '2':
			cout << endl << "Resta" << endl;

			break;
		case '3':
			cout << endl << "Multiplicacion" << endl;

			break;
		case '4':
			cout << endl << "Division" << endl;

			break;
		}
	}

}

void ingresoDeDatos() {

	string primeraFraccion;
	string segundaFraccion;

	bool validarInput(string fraccion);
	bool isFraccion1{};
	bool isFraccion2{};

	while (isFraccion1 == false) {
		cout << endl << "Ingresa la primera fraccion (por ejemplo: 7/2): ";
		cin >> primeraFraccion;
		isFraccion1 = validarInput(primeraFraccion); //tratar de ahorrar lineas y meter esto en el while(PENDIENTE)
	}

	while (isFraccion2 == false) {
		cout << endl << "Ingresa la segunda fraccion: ";
		cin >> segundaFraccion;
		isFraccion2 = validarInput(segundaFraccion);
	}

}

bool validarInput(string fraccion) {

	char* fraccion_char = new char[fraccion.length() + 1];
	strcpy(fraccion_char, fraccion.c_str());//convierto el string de la primera fraccion a un arreglo tipo char
	//todo esto para utilizar el arreglo para jugar con las posiciones y los caracteres

	int posicionSlash{};
	int pS{};

	for (int a{}; a < fraccion.length(); a++) {
		//todas estas condiciones son para validar la estructura de una fraccion
		if (fraccion_char[a] == '/') { //revisa si en alguna posicion del arreglo para empezar hay un /
			posicionSlash = a;
			pS = posicionSlash + 1; // esta solo es para sumar y 1 y poder ver la posicion del slash real
		}
	}

	if (posicionSlash == 0 || pS == fraccion.length()) { // si el / esta o al principio o al final dale cuello
		cout << "nose puede";
		return false;
	}
	else {
		sharedata(posicionSlash, fraccion.length());
		return true;
		//ME FALTA RETORNAR NUM Y DEM o sacarlos de alguna forma y vamonos a las clases
	}

}

string sharedata(int posicionSlash, int tamañoCadena) {

	for (int b{}; b < posicionSlash; b++) {//desde la posicion 0 hasta la posicion del slash
		//cout << fraccion_char[b];//numerador
	}

	int c = posicionSlash + 1;
	for (c; c < tamañoCadena; c++) {//desde la posicion del slash hasta la cantidad de caracteres
		//cout << fraccion_char[c];//denominador
	}

	return "a";

}

int main() {

	intro();

}