#include <iostream>
using namespace std;
int main(){
	int numero_de_camisas;
	float total_compra,total_a_pagar;
	cout<<"Digite el numero de camisas"<<endl;
	cin>>numero_de_camisas;
	cout<<"Digite el costo total de las camisas"<<endl;
	cin>>total_compra;
	
	if (numero_de_camisas>=3){
		total_a_pagar=total_compra*0.8;
	}else{
		total_a_pagar=total_compra*0.9;
	}
	
	cout<<"Usted debe pagar: "<<total_a_pagar<<endl;
	return 0;
	//"Si puedes imaginarlo puedes programarlo"
}