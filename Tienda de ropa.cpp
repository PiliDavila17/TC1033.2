/*
Este programa es para darle al usuario un mejor filtro de las prendas que quiere comprar en una tienda de ropa
Autor: María del Pilar Dávila Verduzco
Fecha: Noviembre 2021
Tecnológico de Monterrey
Campus Querétaro
TC1033

*/
#include <string>
#include "pantalones.h"
#include "faldas.h"
#include "blusas.h"

using namespace std;


int main(){
	int o;
	string ti;
	string tal;
	string fin;
	int cont;
	int total;
	int pant=400;
	int blu=250;
	int fal=350;
	
	while (true){
	
	cout<<"Que prenda quieres? \n1. Pantalon \n2. Falda \n3. Blusa \n4. Finalizar compra\n";
	cin>>o;
	

	if (o==1)
	{
		total=total+pant;
		cout<<"Describe tu pantalon ideal"<<endl;
		
			Pantalones pantalon_1("Talla: CH, M, G, XL", "Tipo: Mezclilla, Vestir, Cuero, Manta");
			cout 	<< pantalon_1.get_talla()<<" "\
		  			<< pantalon_1.get_tipo() <<endl;
		  	cout<<"Introduzca la talla: ";
			cin>>ti;
		  	ti==ti;
		  	cout<<"Introduzca el tipo: "<<endl;
			cin>>tal;
			tal==tal;					  		
	}
	else 
		if (o==2)
		{
			total=total+fal;
			cout<<"Describe tu falda ideal"<<endl;
			
				Faldas falda_1("Talla: CH, M, G, XL", "Tipo: Corta, Larga, Midi");
				cout 	<< falda_1.get_talla()<<" "\
			  			<< falda_1.get_tipo() <<endl;
			  	cout<<"Introduzca la talla: ";
				cin>>ti;
			  	ti==ti;
			  	cout<<"Introduzca el tipo: "<<endl;
				cin>>tal;
				tal==tal;			
				
		}
	else 
		if (o==3)
		{
			
			cout<<"Describe tu blusa ideal"<<endl;
			
					Blusas blusa_1("BLUSA 1 ->Talla: CH", "Tipo: Manga corta");
				cout 	<< blusa_1.get_talla()<<" "\
			  			<< blusa_1.get_tipo() <<endl;
				cout<<"Introduzca la talla: ";
				cin>>ti;
			  	ti==ti;
			  	cout<<"Introduzca el tipo: "<<endl;
				cin>>tal;
				tal==tal;
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


