//Clase Blusas
//Objetos 
//	talla (CH,M,G,XG)
//	Tipo (manga larga o manga corta)

#include<string>
#include<iostream>


using namespace std;

class Blusas{
	private:
		string talla;
		string tipo;
	
	public:
		Blusas(): talla(" "), tipo(" "){};
		Blusas(string ta, string ti): talla (ta), tipo(ti){};
		
		string get_talla();
		string get_tipo();
		
		 void set_talla(string );
		 void set_tipo(string );
};
		 
string Blusas::get_talla(){
	return talla;
}


string Blusas::get_tipo(){
	return tipo;
}

void Blusas::set_talla(string ta){
	talla=ta;
}
void Blusas::set_tipo(string ti){
	tipo=ti;
}
