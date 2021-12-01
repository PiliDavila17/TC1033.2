/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Noviembre 2021

Tecnologico de Monterrey
Campus Queretaro
MATERIA: TC1033

PROYECTO "Tienda de Ropa"

Este programa es parte del proyecto final de la Materia Pensamiento Computacional Orientado a Objetos.
Su funcionalidad está enfocada a darle al usuario un filtro de las prendas que quiere comprar en una tienda de ropa,
con el objetivo de agilizar su atención, para que posterior a realizar el filtro, pueda acceder a la zona de cobro solo a pagar y obtener su mercancia.



*/

//Bibliotecas
#include<iostream>
#include "pantalon.h"
#include "falda.h"
#include "blusa.h"
#include "carrito.h"

using namespace std;

//Main, función principal del programa
int main() {
//Variables utilizadas
	int o;
	string ti;
	string ta;
	string fin;
	string ep;
	int cont;
	int total = 0;
	int pant = 400;
	int blu = 250;
	int fal = 350;
	Carrito usuario;
	int contPant = 0;
	int contFal = 0;
	int contBlus = 0;

//Ciclo para recorrer el programa hasta que sea escogida la opción "Salir"
	while (true) {
		//Menu de las funciones del programa
		cout << "MENU \n\nQue prenda quieres? \n1. Pantalon \n2. Falda \n3. Blusa \n4. Finalizar compra \n5. Imprimir Carrito \n6. Salir \n--> ";
		cin >> o;//Opcion elegida por el usuario

		//Funcion 1: Imprime lo correspondiente a la clase Pantalones
		if (o == 1)
		{
			total = total+pant;//Calcula el costo del pantalon
			contPant++;

			cout << "\nDescriba su pantalon ideal \n(Escriba su opcion con la palabra exacta)" << endl;

			Pantalon pantalon_1("\nTalla: \nCH \nM \nG \nXL",
				"\nTipo: \nMezclilla \nVestir \nCuero \nManta",
				"\nEpoca: \n70s \n80s \n90s: ");
			cout << pantalon_1.getTalla() << " " << endl; 
			cout << "Introduzca la talla: ";
			cin >> ta;
			pantalon_1.setTalla(ta);
			cout << pantalon_1.getTipo() << endl;
			cout << "Introduzca el tipo: ";
			cin >> ti;
			pantalon_1.setTipo(ti);
			cout << pantalon_1.getEpoca() << endl;
			cout << "Introduzca la Epoca: ";
			cin >> ep;
			pantalon_1.setEpoca(ep);
			cout << "\nSe ha guardado su eleccion" << endl << endl;
			usuario.agregaPantalon(pantalon_1);
		}
		//Funcion 2: Imprime lo correspondiente a la clase Falda
		else
			if (o == 2)
			{
				total = total + fal;
				contFal++;
				cout << "\nDescribe tu falda ideal \n(Escriba su opcion con la palabra exacta)" << endl;

				Falda falda_1("\nTalla: \nCH \nM \nG \nXL", "\nTipo:\nCorta \nLarga \nMidi ");
				cout << falda_1.getTalla() << " " << endl;
				cout << "Introduzca la talla: ";
				cin >> ta;
				falda_1.setTalla(ta);

				cout << falda_1.getTipo() << endl;
				cout << "Introduzca el tipo: ";
				cin >> ti;
				falda_1.setTipo(ti);

				cout << "\nSe ha guardado su eleccion" << endl << endl;
				usuario.agregaFalda(falda_1);

			}
		//Funcion 3: Imprime lo correspondiente a la clase Blusa
			else
				if (o == 3)
				{
					total = total + blu;
					contBlus++;
					cout << "\nDescribe tu blusa ideal \n(Escriba su opcion con la palabra exacta)" << endl;

					Blusa blusa_1("\nTalla: \nCH \nM \nG \nXL", "\nTipo: \nSe divide por corte de manga:\n Corta \nLarga \n3/4");
					cout << blusa_1.getTalla() << " ";
					cout << "\nIntroduzca la talla: ";
					cin >> ta;
					blusa_1.setTalla(ta);

					cout << blusa_1.getTipo() << endl;
					cout << "\nIntroduzca el tipo: ";
					cin >> ti;
					blusa_1.setTipo(ti);

					cout << "Se ha guardado su eleccion" << endl << endl;
					usuario.agregaBlusa(blusa_1);
				}
		//Funcion 4: Imprime el total de prendas compradas
				else
					if (o == 4)
					{
						cout << "Ha finalizado su compra! \n\n GRACIAS POR SU PREFERENCIA \n\nQuiere proceder al pago? (s/n): ";
						cin >> fin;

						if (fin == "s")
						{
							cout << "\nGRACIAS POR SU COMPRA!" << endl;
							cout << "El total es: $" << total << endl;
							cout << "Imprima su carrito para proseguir con la compra" << endl << endl;
						}
						else
							if (fin == "n")
							{
								cout << "Continuemos" << endl;
							}
							else
								cout << "Opción invalida, intentelo de nuevo" << endl << endl;
					}
		//Funcion 2: Imprime la clase carrito, o sea las prendas que se eligieron
					else
						if (o == 5)
						{
							cout << "\nEL CARRITO CONTIENE: " << endl;
							cout << "Total de blusas: " << contBlus << endl;
							for (int i = 0; i < usuario.getpos_blus(); i++) {
								cout << "Blusa " << i + 1 << endl;
								cout << "\nTalla: " << usuario.getBlusa(i).getTalla();
								cout << "\nTipo de manga: " << usuario.getBlusa(i).getTipo() << endl << endl;
							}
							cout << "Total de faldas: " << contFal << endl;
							for (int i = 0; i < usuario.getpos_fal(); i++) {
								cout << "Falda " << i + 1 << endl;
								cout << "Talla: " << usuario.getFalda(i).getTalla() << endl;
								cout << "Tipo: " << usuario.getFalda(i).getTipo() << endl << endl;
							}
							cout << "Total de pantalones: " << contPant << endl;
							for (int i = 0; i < usuario.getpos_pant(); i++) {
								cout << "Pantalon " << i + 1 << endl;
								cout << "Talla: " << usuario.getPantalon(i).getTalla() << endl;
								cout << "Tipo: " << usuario.getPantalon(i).getTipo() << endl;
								cout << "Epoca: " << usuario.getPantalon(i).getEpoca() << endl << endl;
							}
						}
				//Funcion 6: Fin del proceso
						else
							if (o == 6)
							{
								cout << "\nPase a la caja a pagar y recoger sus prendas. \nGracias por venir \nVUELVA PRONTO" << endl << endl;
								break; //Cierra el ciclo
							}
	}
	return 0;
}

