// Cargar 2 vectores C y D con numeros enteros. Luego informe:
// * Cantidad de numeros del vector C que son menores al primer valor cargado del vector B
// * Cantidad de numeros del vector D que son mayores al promedio total del vector C
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> C = {34, 67, 23, 89, 11, 21, 48, 77};
    vector <int> D = {38, 65, 90, 35, 27, 14, 3, 99};
    int numsMayorC = 0;
    int sumaC = 0;
    int numsMayorD = 0;

    for(int i=0; i<C.size(); ++i) {
        sumaC = sumaC + C[i];
        if(C[i] > D[0]) {
            numsMayorC++;
        }
    }

    double promedioC = static_cast<double>(sumaC) / C.size();

    for(int j=0; j<D.size(); j++) {
        if(D[j] > promedioC) {
            numsMayorD++;
        }
    }

    cout << "El vector C tiene " << numsMayorC << " numeros mayores que el primer numero del vector D" << endl;
    cout << "El vector D tiene " << numsMayorD << " numeros mayores que el promedio del vector C" << endl;
    return 0;
}