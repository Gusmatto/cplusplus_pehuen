// Una empresa debe registrar los pedidos recibidos de cada uno
// de sus 10 productos a lo largo del día. Por cada pedido se recibe
// * Codigo de producto (de 1 a 10)
// * Cantidad de unidades solicitadas. Se puede recibir mas de un pedido por producto.
// La carga finaliza cuando se ingresa un producto con codigo igual a cero.
// Al finalizar se debe emitir un listado con codigo y cantidad de unidades solicitadas de cada producto.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int cantidadProductos = 10;
    vector<int> unidadesSolicitadas(cantidadProductos, 0); // Inicializar a 0

    cout << "Ingrese los pedidos recibidos. Ingrese 0 en el codigo para finalizar." << endl;
    while (true) {
        int codigoProducto;
        int cantidad;

        cout << "Ingrese el codigo de producto (1-10, 0 para finalizar): ";
        cin >> codigoProducto;

        if (codigoProducto == 0) {
            // Ingresó 0, finalizar la carga
            break;
        }

        if (codigoProducto < 1 || codigoProducto > cantidadProductos) {
            cout << "Codigo de producto invalido. Debe estar entre 1 y 10." << endl;
            continue;
        }

        cout << "Ingrese la cantidad de unidades solicitadas: ";
        cin >> cantidad;

        // Actualizar la cantidad de unidades solicitadas para el producto
        unidadesSolicitadas[codigoProducto - 1] += cantidad;
    }

    // Mostrar el listado final
    cout << "Listado de unidades solicitadas por producto:" << endl;
    for (int i = 0; i < cantidadProductos; ++i) {
        cout << "Producto " << i + 1 << ": " << unidadesSolicitadas[i] << " unidades" << endl;
    }

    return 0;
}


