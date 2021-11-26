//Clase Ropa
//Super Clase de la Tienda de Ropa
//Objetos 
//	talla (CH,M,G,XG)
//	Tipo (Mezclilla o Vestir)

#ifndef ROPA_H
#define ROPA_H

#include<iostream>


using namespace std;

class Ropa{
	private:
		string talla;
		string tipo;
	
	public:
		Ropa(string ta, string ti){
			 talla=ta;
			 tipo=ti;
		}
		string getTalla(){
			return talla;
		}
		
		string getTipo(){
			return tipo;
		}
		
		void setTalla(string ta){
			talla=ta;
		}
		
		void setTipo(string ti){
			tipo=ti;
		}
		
};
#endif
