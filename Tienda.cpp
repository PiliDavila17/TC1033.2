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

#include<iostream>

using namespace std;

#include "pantalon.h"
#include "falda.h"
#include "blusa.h"
#include "carrito.h"

int main() {
	int o;
	string ti;
	string ta;
	string fin;
	string ep;
	int cont;
	int total = 1;
	int pant = 400;
	int blu = 250;
	int fal = 350;
	Carrito usuario;


	while (true) {

		cout << "MENU \n\nQue prenda quieres? \n1. Pantalon \n2. Falda \n3. Blusa \n4. Finalizar compra \n5. Imprimir Carrito \n6. Salir \n--> ";
		cin >> o;


		if (o == 1)
		{
			total = total * pant;
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
		else
			if (o == 2)
			{
				total = total + fal;
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
			else
				if (o == 3)
				{

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
					else
						if (o == 5)
						{
							cout << "\nEL CARRITO CONTIENE: " << endl;
							for (int i = 0; i < usuario.getpos_blus(); i++) {
								cout << "BLUSA: " << endl;
								cout << "\nTalla: " << usuario.getBlusa(i).getTalla();
								cout << "\nTipo de manga: " << usuario.getBlusa(i).getTipo() << endl;
							}
							for (int i = 0; i < usuario.getpos_fal(); i++) {
								cout << "\nFALDA: " << endl;
								cout << "Talla: " << usuario.getFalda(i).getTalla() << endl;
								cout << "Tipo: " << usuario.getFalda(i).getTipo() << endl;
							}

							for (int i = 0; i < usuario.getpos_pant(); i++) {
								cout << "\nPANTALON: " << endl;
								cout << "Talla: " << usuario.getPantalon(i).getTalla() << endl;
								cout << "Tipo: " << usuario.getPantalon(i).getTipo() << endl;
								cout << "Epoca: " << usuario.getPantalon(i).getEpoca() << endl << endl;
							}
						}
						else
							if (o == 6)
							{
								cout << "\nPase a la caja a pagar y recoger sus prendas. \nGracias por venir \nVUELVA PRONTO";
								break;
							}
	}
	return 0;
}

