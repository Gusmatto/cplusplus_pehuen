//
// Dado un vector de 5 posiciones, realizar un programa que lo cargue y muestre por pantalla al mayor de los valores
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> miVector(5);
    cout << "Ingrese 5 elementos para el vector:" << endl;
    int mayor = 0;

    for(int i=0; i<miVector.size(); i++) {
        cout << "Ingrese el valor para la posicion " << i+1 << endl;
        cin >> miVector[i];
    }

    int valorMaximo = miVector[0];
    for (int i = 1; i < miVector.size(); ++i) {
        if (miVector[i] > valorMaximo) {
            valorMaximo = miVector[i];
        }
    }

    cout << "El valor maximo ingresado es: " << valorMaximo << endl;
    return 0;
}
