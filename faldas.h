//Clase faldas
//Objetos 
//	talla (CH,M,G,XG)
//	Tipo (corta, larga, midi)

#include<string>
#include<iostream>


using namespace std;

class Faldas{
	private:
		string talla;
		string tipo;
	
	public:
		Faldas(): talla(" "), tipo(" "){};
		Faldas(string ta, string ti): talla (ta), tipo(ti){};
		
		string get_talla();
		string get_tipo();
		
		 void set_talla(string );
		 void set_tipo(string );
};
		 
string Faldas::get_talla(){
	return talla;
}


string Faldas::get_tipo(){
	return tipo;
}

void Faldas::set_talla(string ta){
	talla=ta;
}
void Faldas::set_tipo(string ti){
	tipo=ti;
}
