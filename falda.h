/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Noviembre 2021

Clase faldas hija de Ropa
Objetos:
	talla (CH,M,G,XG)
	Tipo (corta, larga, midi)
*/


#ifndef FALDAS_H_
#define FALDAS_H_

#include "ropa.h"

#include <sstream>
#include <iostream>

using namespace std;

//declaracion de la clase
class Falda : public Ropa {

public://constructor del objeto
	Falda() {};
	Falda(string ta, string ti) : Ropa(ta, ti) {};

};

#endif
