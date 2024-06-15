#include <iostream>
using namespace std;
int main(){
	float compra_total,pago_descontado;
	cout<<"Digite el total de la compra: "<<endl;
	cin>>compra_total;
	if (compra_total>1000){
		pago_descontado = compra_total*0.8;
		cout<<"El cliente debe pagar : " << "S/."<<pago_descontado;
	}else{
		cout<<"El cliente debe pagar : " << "S/."<<compra_total;
	}
	return 0;
	//"Si puedes imaginarlo puedes programarlo"
}