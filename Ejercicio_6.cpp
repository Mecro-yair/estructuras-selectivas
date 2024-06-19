#include <iostream>
using namespace std;
//Declaro la funcion
float total(float x,float y);

float total(float x,float y){
	float igv;
	float total;
	//si promedio es mayor o igual a 18 solo paga el 70%
	if (x >= 18) {
        y = y*0.7;
        igv = 0;
    } else {
        igv = 0.18 * y; //si no se le cobra el igv
    }
    total = y + igv;    // aqui se le cobra
    return total;
}


int main() {
    float promedio,pension;
    cout << "Digite el promedio obtenido en el ultimo periodo: "<<endl;cin >> promedio;
    cout << "Digite la pension educativa : "<<endl;cin >> pension;  
    if (promedio>=0 && pension>=0){
    	cout << "El alumno debe pagar: "<< total(promedio,pension) << endl;
	}else{
		cout<<"ERROR.Digito un numero negativo";
	} 
    
    return 0;
    //"Si puedes imaginarlo puedes programarlo"
}
