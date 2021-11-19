//Clase Pantalones
//Objetos 
//	talla (CH,M,G,XG)
//	Tipo (Mezclilla o Vestir)

#include<string>
#include<iostream>


using namespace std;

class Pantalones{
	private:
		string talla;
		string tipo;
	
	public:
		Pantalones(): talla(" "), tipo(" "){};
		Pantalones(string ta, string ti): talla (ta), tipo(ti){};
		
		string get_talla();
		string get_tipo();
		
		 void set_talla(string );
		 void set_tipo(string );
};
		 
string Pantalones::get_talla(){
	return talla;
}


string Pantalones::get_tipo(){
	return tipo;
}

void Pantalones::set_talla(string ta){
	talla=ta;
}

void Pantalones::set_tipo(string ti){
	tipo=ti;
}
