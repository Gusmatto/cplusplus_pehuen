// Dado el vector inflacion... cada item representa la inflacion de un mes de tal manera que el primer item del
// vector, que es 0.8, representa la inflacion de enero y la ultima, la inflacion de diciembre, se pide:
// * Informar la inflacion anual
// * Informar la inflacion mas baja, junto con el numero del mes, por ej. Mes 2 = 0.1
// * Informar la inflacion mas alta, junto con el numero del mes, por ej. Mes 12 = 0.8
// * Informar el promedio de la inflacion anual

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <double> inflacion{0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    double suma = 0;
    double promedio = 0;

    double valorMasBajo = inflacion[0];
    int indiceMasBajo = 0;

    double valorMasAlto = inflacion[0];
    int indiceMasAlto = 0;

    for (int i = 0; i < inflacion.size(); ++i) {
        suma = suma + inflacion[i];

        if (inflacion[i] < valorMasBajo) {
            valorMasBajo = inflacion[i];
            indiceMasBajo = i;
        }

        if (inflacion[i] > valorMasAlto) {
            valorMasAlto = inflacion[i];
            indiceMasAlto = i;
        }
    }
    promedio = suma / inflacion.size();

    cout << "La suma de la inflacion anual es: " << suma << "%" << endl;
    cout << "Inflacion mas baja. Mes " << indiceMasBajo + 1 << " = " << valorMasBajo << endl;
    cout << "Inflacion mas alta. Mes " << indiceMasAlto + 1 << " = " << valorMasAlto << endl;
    cout << "Promedio anual: " << promedio << "%" << endl;

    return 0;
}
