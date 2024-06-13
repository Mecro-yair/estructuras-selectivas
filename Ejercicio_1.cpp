#include <iostream>

using namespace std;

int main(){
	float a,b,c,promedio;
	cout<<"Digita las tres calificaciones: "<<endl;
	cin>> a >> b >> c;
	promedio = (a+b+c)/3;
	if (promedio>=70){
	    cout<<"Aprobo el curso";	
	}else{
		cout<<"Reprobo el curso";
	}
	return 0;
	//"Si puedes imaginarlo puedes programarlo"
}