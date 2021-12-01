/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Noviembre 2021

Clase Pantalones
Hija de Ropa
*/


#ifndef PANTALONES_H_
#define PANTALONES_H_
#include"ropa.h"

#include <sstream>
#include <iostream>

using namespace std;

//Declaración de la clase
class Pantalon : public Ropa {
//Variable que tendrá únicamente esta clase
private:
	string epoca;
//Declaracion de métodos y constructores
public:
	Pantalon() {};
	Pantalon(string ta, string ti, string ep) :Ropa(ta, ti) {
		epoca = ep;
	}
	string getEpoca() {
		return epoca;
	}
	void setEpoca(string ep);
	string to_string();
};

void Pantalon::setEpoca(string ep) {
	epoca = ep;
};

#endif
