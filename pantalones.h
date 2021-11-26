//Clase Pantalones
//Hija de Ropa

#include"ropa.h"


class Pantalones: public Ropa{
	
	private: 
		string epoca;
	
	public:
		Pantalones(string ta, string ti, string ep):Ropa(ta, ti){
		epoca=ep;
		}
		string getEpoca(){
			return epoca;
		}

void setEpoca(string ep){
	epoca=ep;
}
};
