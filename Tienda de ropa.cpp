/*
Este programa es para darle al usuario un mejor filtro de las prendas que quiere comprar en una tienda de ropa
Autor: María del Pilar Dávila Verduzco
Fecha: Noviembre 2021
Tecnológico de Monterrey
Campus Querétaro
TC1033
*/
#include<iostream>

using namespace std;

#include "pantalon.h"
#include "falda.h"
#include "blusa.h"


int main(){
	int o;
	string ti;
	string ta;
	string fin;
	string ep;
	int cont;
	int total;
	int pant=400;
	int blu=250;
	int fal=350;
	
	while (true){
	
	cout<<"MENU \nQue prenda quieres? \n1. Pantalon \n2. Falda \n3. Blusa \n4. Finalizar compra\n";
	cin>>o;
	

	if (o==1)
	{
		total=total+pant;
		cout<<"Describe tu pantalon ideal"<<endl;
		
			Pantalones pantalon_1("Talla: \na)Chica \nb)Mediana \nc)Grande \nd)Extra Grande:", "\nTipo: \na)Mezclilla \nb)Vestir \nc)Cuero \nd)Manta", "\nEpoca: \na) 70s \nb) 80s \nb) 90s: ");
			cout 	<< pantalon_1.getTalla()<<" "<<endl;
						cout<<"Introduzca la talla: ";
						cin>>ta;
					  	pantalon_1.setTalla(ta);
		  	cout	<< pantalon_1.getTipo() <<endl;
			  	cout<<"Introduzca el tipo: ";
				cin>>ti;
				pantalon_1.setTipo(ti);
			cout 	<< pantalon_1.getEpoca()<<endl;
				cout<<"Introduzca la Epoca: "<<endl;
				cin>>ep;
				pantalon_1.setEpoca(ep);
				cout<<"Se ha guardado su eleccion"<<endl<<endl;			  		
	}
	else 
		if (o==2)
		{
			total=total+fal;
			cout<<"Describe tu falda ideal"<<endl;
			
				Faldas falda_1("Talla: CH, M, G, XL", "Tipo: Corta, Larga, Midi");
				cout 	<< falda_1.getTalla()<<" "<<endl;
						cout<<"Introduzca la talla: "<<endl;
						cin>>ta;
			  			falda_1.setTalla(ta);
			  			
			  	cout	<<falda_1.getTipo() <<endl;
					  	cout<<"Introduzca el tipo: "<<endl;
						cin>>ti;
						falda_1.setTipo(ti);
						
				cout<<"Se ha guardado su elección"<<endl;			
				
		}
	else 
		if (o==3)
		{
			
			cout<<"Describe tu blusa ideal"<<endl;
			
					Blusas blusa_1("BLUSA 1 ->Talla: CH", "Tipo: Manga corta");
				cout 	<<	blusa_1.getTalla()<<" ";
							cout<<"Introduzca la talla: ";
							cin>>ta;
						  	blusa_1.setTalla(ta);
						  	
			  	cout	<< blusa_1.getTipo() <<endl;
						  	cout<<"Introduzca el tipo: "<<endl;
							cin>>ti;
							blusa_1.setTipo(ti);
							
				cout<<"Se ha guardado su elección"<<endl;
							
		}
	else
		if(o==4)
		{
			cout<<"Ha finalizado su compra. \n GRACIAS POR PREFERENCIA \n¿Quiere proceder al pago? (s/n)";
			cin>>fin;
			
			if (fin=="s")
			{
				cout << "El total es: " <<total<<endl;
				break;
			}
			else 
				if(fin=="n")
				{
					cout<<"ADIÓS"<<endl;
					break;
				}
		}
			
			
	}

	
	return 0;
}
