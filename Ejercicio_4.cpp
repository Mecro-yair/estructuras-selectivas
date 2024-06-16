#include <iostream>
using namespace std;
float descontado(int x,float y);
float descontado(int x,float y){
	float dinero_descontado;
	if (x<74){
		dinero_descontado=y*0.15;
	}else{
		dinero_descontado=y*0.20;
	}
    return dinero_descontado;
}
int main(){
	float total_de_compra;
	int numero_aleatorio;
	cout<<"Digite el numero aleatorio que le toco: "<<endl;
	cin>>numero_aleatorio;
	cout<<"Digite el total de la compra: "<<endl;
	cin>>total_de_compra;		
	cout<<"El dinero que se descontará sera "<<descontado(numero_aleatorio,total_de_compra)<<endl;
	
	return 0;
	//"Si puedes imaginarlo puedes programarlo"
}