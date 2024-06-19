#include <iostream>
using namespace std;
float costo_ind(float x);
float costo_ind(float x){
	float costo_individual;
    //x = num_llantas
    if (x < 5) {
    costo_individual = 300;
    }else if (x >= 5 && x <= 10) {
    costo_individual = 250;
    }else {
    costo_individual = 200;
    }
    return costo_individual;
}

int main() {
    int num_llantas;
    float costo_total;

    cout << "Ingrese la cantidad de llantas que desea comprar: "<<endl;
    cin >> num_llantas;
    if (num_llantas>0){
    	costo_total = num_llantas * costo_ind(num_llantas);
    	cout << "El costo por cada llanta es: " << costo_ind(num_llantas) << endl;
    	cout << "El costo total de la compra: " << costo_total << endl;
	}else if (num_llantas<0){
		cout<<"Digite un numero positivo";
	}else{
		cout<<"HASTA LUEGO,LO ESPERAMOS CUANDO DESEE COMPRAR...";
	}
    

    
    

    return 0;
    //"Si puedes imaginarlo puedes programarlo"
}
