#include <iostream>

using namespace std;

int main(){
	float nota1,nota2,nota3,promedio;
	cout<<"Digita las tres calificaciones: "<<endl;
	cin>> nota1 >> nota2 >> nota3;
	promedio = (nota1+nota2+nota3)/3;
	if (nota1<0 || nota2<0 || nota3<0){
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