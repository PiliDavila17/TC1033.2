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
	int tip;
	int tal;
	cout<<"Que prenda quieres? 1. Pantalon, 2. Falda, 3. Blusa: ";
	cin>>o;
	if (o==1)
	{
		cout<<"Describe tu pantalon ideal"<<endl;
		
			Pantalones pantalon_1("PANTALON 1 -> Talla: CH", "Tipo: Mezclilla");
			cout 	<< pantalon_1.get_talla()<<" "\
		  			<< pantalon_1.get_tipo() <<endl;
		
			
			pantalon_1.set_talla("PANTALON 2 -> Talla: M"); \
			pantalon_1.set_tipo("Tipo: Vestir");
		
		
			cout<<pantalon_1.get_talla() << " "
				<<pantalon_1.get_tipo() << endl;
	}
	else 
		if (o==2)
		{
			cout<<"Describe tu falda ideal"<<endl;
			
				Faldas falda_1("FALDA 1 -> Talla: CH", "Tipo: Larga");
				cout 	<< falda_1.get_talla()<<" "\
			  			<< falda_1.get_tipo() <<endl;
			
				
				falda_1.set_talla("FALDA 2 -> Talla: M"); \
				falda_1.set_tipo("Tipo: Corta");
			
			
				cout<<falda_1.get_talla() << " "
					<<falda_1.get_tipo() << endl;
		}
	else 
		if (o==3)
		{
			cout<<"Describe tu blusa ideal"<<endl;
			
				Blusas blusa_1("BLUSA 1 ->Talla: CH", "Tipo: Manga corta");
				cout 	<< blusa_1.get_talla()<<" "\
			  			<< blusa_1.get_tipo() <<endl;
			
				
				blusa_1.set_talla("BLUSA 2 -> Talla: M"); \
				blusa_1.set_tipo("Tipo: Manga Corta");
			
			
				cout<<blusa_1.get_talla() << " "
					<<blusa_1.get_tipo() << endl;
		}

return 0;
}
