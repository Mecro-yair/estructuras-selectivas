#include <iostream>
using namespace std;
int main(){
	int numero_aleatorio;
	float total_de_compra,dinero_descontado;
	cout<<"Digite el numero aleatorio que le toco: "<<endl;
	cin>>numero_aleatorio;
	cout<<"Digite el total de la compra: "<<endl;
	cin>>total_de_compra;
	
	if (numero_aleatorio<74){
		dinero_descontado=total_de_compra*0.15;
	}else{
		dinero_descontado=total_de_compra*0.20;
	}
	
	cout<<"El dinero que se descontará sera "<<dinero_descontado<<endl;
	
	return 0;
	//"Si puedes imaginarlo puedes programarlo"
}