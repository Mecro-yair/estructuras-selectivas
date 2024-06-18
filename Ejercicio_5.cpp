#include <iostream>
using namespace std;

int main() {
    int edad;
    char sexo;
    float numPulsaciones;
    
    cout << "Digite su edad: "<<endl;
    cin >> edad;
    cout << "Digite su sexo ( m para masculino, f para femenino): "<<endl;
    cin >> sexo;

    
    if (sexo == 'f') {
        numPulsaciones = (220-edad)/10;
        cout << "El numero de pulsaciones por cada 10 segundos es : " << numPulsaciones << endl;
    } else if (sexo == 'm') {
        numPulsaciones = (210-edad)/10;
        cout << "El numero de pulsaciones por cada 10 segundos es : " << numPulsaciones << endl;
    } else {
        cout << "Sexo invalido. Digite 'f' o 'm'." << endl;
    }
    return 0;
    //"Si puedes imaginarlo puedes programarlo"
}
