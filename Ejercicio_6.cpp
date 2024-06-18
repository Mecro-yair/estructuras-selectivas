#include <iostream>
using namespace std;
int main() {
    float promedio,pension,igv,total;
    cout << "Digite el promedio obtenido en el ultimo periodo: "<<endl;
    cin >> promedio;
    cout << "Digite la pension educativa : "<<endl;
    cin >> pension;

    if (promedio >= 18) {
        pension = pension*0.7;
        igv = 0;
    } else {
        igv = 0.18 * pension;
    }
    total = pension + igv;
    
    
    cout << "El alumno debe pagar: "<< total << endl;
    return 0;
    //"Si puedes imaginarlo puedes programarlo"
}
