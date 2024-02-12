// Cargar un vector A de 25 posicones con valores leidos por teclado, Luego recorrer todo el vector A y copiar los
// valores que sean multiplo de 3 en un nuevo vector B

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int tamanio = 25;
    vector<int> A(tamanio);
    vector<int> B;

    cout << "Ingrese 25 valores para el vector A:" << endl;
    for (int i = 0; i < tamanio; ++i) {
        cout << "Ingrese el valor para la posicion " << i + 1 << ": ";
        cin >> A[i];
    }

    for (int i = 0; i < tamanio; ++i) {
        if (A[i] % 3 == 0) {
            B.push_back(A[i]);
        }
    }

    cout << "Multiplos de 3 en el vector B:" << endl;
    for (int i = 0; i < B.size(); ++i) {
        cout << "B[" << i << "] = " << B[i] << endl;
    }
    return 0;
}


