/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Noviembre 2021

Clase Ropa
Super Clase del Proyecto "Tienda de Ropa", la cual tiene tres clases hijas
Blusa, Pantalon y Falda
*/

#ifndef ROPA_H
#define ROPA_H

#include<iostream>

using namespace std;

class Ropa {
protected:
	string talla;
	string tipo;

public:
	Ropa() {};
	Ropa(string ta, string ti) {
		talla = ta;
		tipo = ti;
	}
	string getTalla() {
		return talla;
	}

	string getTipo() {
		return tipo;
	}

	void setTalla(string ta) {
		talla = ta;
	}

	void setTipo(string ti) {
		tipo = ti;
	}

};
#endif#pragma once
