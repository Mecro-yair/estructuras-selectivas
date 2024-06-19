#include <iostream>
using namespace std;
int main() {
    int num_llantas;
    float costo_individual, costo_total;

    cout << "Ingrese la cantidad de llantas que desea comprar: "<<endl;
    cin >> num_llantas;

    if (num_llantas < 5) {
        costo_individual = 300;
    }else if (num_llantas >= 5 && num_llantas <= 10) {
        costo_individual = 250;
    }else {
        costo_individual = 200;
    }

    costo_total = num_llantas * costo_individual;

    cout << "El costo por cada llanta es: " << costo_individual << endl;
    cout << "El costo total de la compra: " << costo_total << endl;

    return 0;
    //"Si puedes imaginarlo puedes programarlo"
}
