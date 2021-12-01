/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Noviembre 2021

//Clase Carrito
//Asociada a todas 
//El cliente podra imprimir una lista de lo que compro
*/


#ifndef _CARRITO_H_
#define _CARRITO_H_

#include <iostream>
#include<string>

using namespace std;

#include"blusa.h"
#include"falda.h"
#include"pantalon.h"


class Carrito{
private:
	Blusa blusas[10];
	Falda faldas[10];
	Pantalon pantalones[10];
	int pos_blus;
	int pos_pant;
	int pos_fal;
	
	
public:
	Carrito():pos_blus(0), pos_pant(0), pos_fal(0){};
	void agregaBlusa(Blusa );
	void agregaPantalon(Pantalon );
	void agregaFalda(Falda );
	
	int getpos_blus();
	int getpos_fal();
	int getpos_pant();
	
	Blusa getBlusa(int );
	Pantalon getPantalon(int );
	Falda getFalda(int );	
};

void Carrito::agregaBlusa(Blusa blus){
	if (pos_blus<10){
	blusas[pos_blus]=blus;
	pos_blus++;
	}	
}
Blusa Carrito::getBlusa(int i){
	return blusas[i];
}

int Carrito::getpos_blus(){
	return pos_blus;
}

void Carrito::agregaPantalon(Pantalon pant){
	if(pos_pant<10){
	pantalones[pos_pant]=pant;
	pos_pant++;	
	}
	
}

Pantalon Carrito::getPantalon(int i){
	return pantalones[i];
}
int Carrito::getpos_pant(){
	return pos_pant;
}

void Carrito::agregaFalda(Falda fal){
	if(pos_fal<10){
	faldas[pos_fal]=fal;
	pos_fal++;
	}
}

Falda Carrito::getFalda(int i){
	return faldas[i];
}
int Carrito::getpos_fal(){
	return pos_fal;
}



#endif


