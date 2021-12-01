/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Noviembre 2021

Clase Blusas
Objetos
talla (CH,M,G,XG)
	Tipo (manga larga o manga corta)
*/

#ifndef BLUSAS_H_
#define BLUSAS_H_

#include <iostream>
#include "ropa.h"

using namespace std;


//Declaracion de la clase
class Blusa : public Ropa {

public:
	Blusa() {};//Constructor
	Blusa(string ta, string ti) : Ropa(ta, ti) {};

};

#endif
