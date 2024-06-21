#include <iostream>

using namespace std;

float prom(float n1,float n2,float n3) {
	float p = (n1+n2+n3)/3;
	return p;
}
bool validacion_notas(float n1,float n2,float n3) {
	bool val;
	if (n1<0 || n2<0 || n3<0){
		val=false;
	} else {
		val=true;
	}
	return val;
}
int main() {
	float nota1,nota2,nota3,promedio;
	bool validacion;
	cout<<"Digita las tres calificaciones: "<<endl;
	cin>> nota1 >> nota2 >> nota3;
	validacion=validacion_notas(nota1,nota2,nota3);
	promedio = prom(nota1,nota2,nota3);
	if (validacion==false){
		cout<<"ERROR3_NEGATIVE_VALUE";
	}else{
		if (promedio>=70){
	    cout<<"Aprobo el curso";
	    }else{
		cout<<"Reprobo el curso";
	    }
	}
	
	
	return 0;
	//"Si puedes imaginarlo puedes programarlo"
}