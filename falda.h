/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Noviembre 2021

//Clase faldas
//Objetos
//	talla (CH,M,G,XG)
//	Tipo (corta, larga, midi)
*/


#ifndef FALDAS_H_
#define FALDAS_H_

#include "ropa.h"

#include <sstream>
#include <iostream>

using namespace std;


class Falda : public Ropa {

public:
	Falda() {};
	Falda(string ta, string ti) : Ropa(ta, ti) {};

};

#endif#pragma once
