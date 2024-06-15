#include <iostream>
using namespace std;

float validacion_compra(float x);
float validacion_compra(float x){
	if (x>1000){
		x = x*0.8;	
	}
	return x;
}


int main(){
	float compra_total,pago_descontado;
	cout<<"Digite el total de la compra: "; cin>>compra_total;
	
	if (compra_total>0){
		cout<<"El cliente debe pagar : " << "S/."<<validacion_compra(compra_total);
	}else{
		cout<<"ERROR1.INVALID_PURCHASE";
	}
	
	
	
	return 0;
	//"Si puedes imaginarlo puedes programarlo"
}