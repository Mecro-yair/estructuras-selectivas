#include <iostream>
using namespace std;

float numPulsaciones(float x,char y);
float numPulsaciones(float x,char y){
	float z;
    if (y == 'f') {
    z = (220-x)/10;
    } else if (y == 'm') {
    z = (210-x)/10;
    }
    return z;
}

int main() {
    int edad;
    char sexo;
    
    cout << "Digite su edad: "<<endl; cin >> edad;
    cout << "Digite su sexo ( m para masculino, f para femenino): "<<endl; cin >> sexo;
    if (edad>0 && (sexo=='f'|| sexo=='m')){
    	cout << "El numero de pulsaciones por cada 10 segundos es : " <<numPulsaciones(edad,sexo)<< endl;
	}else if(edad<=0){
		cout<<"Digite una edad valida";
    }else{
    	cout << "Sexo invalido. Digite 'f' o 'm'." << endl;
	}
    return 0;
    //"Si puedes imaginarlo puedes programarlo"
}
