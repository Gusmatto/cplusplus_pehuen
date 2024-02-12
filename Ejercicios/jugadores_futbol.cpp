// 1) Escribir un programa que permita ingresar los siguientes datos de un nuevo jugador:
//      * Edad
//      * Genero [1 = Femenino 2 = Masculino 3 = No especificado]
//      * Club [1 = Midland, 2 = Gallito de Moron]
// 2) El programa deberá asignar de forma automática la categoría a la cual pertenece el jugador teniendo en cuenta las
//    siguientes consideraciones:
//      * Juvenil <= 18 años
//      * Adulto <= 40 años
//      * Veterano > 40 años
// 3) Se podrán cargar nuevos datos de jugadores hasta que se coloque como edad 99 y / o llegue a la cantidad de 100
//    jugadores. Si fuera el caso indicar cupo excedido.
// 4) Se deberá realizar un informe por pantalla que muestre la siguiente información:
//      *  Todos los datos del jugador, incluida su categoría de competición (un jugador por línea)
//      *  Cantidad de jugadores inscriptos por categoría y cantidad total de todas las categorias.
//      *  El nombre de la categoría que tiene más jugadores inscriptos.
//      *  Cantidad de jugadores inscriptos por club.
//      *  Porcentaje de veteranos.
// Ej: EDAD: 22 – GENERO: Masculino – CLUB: Midland – CATEGORIA: Adulto
// 5) Al iniciar el programa se deberá solicitar el nombre al usuario ingresante.
// 6) Generar un nuevo archivo de texto con el informe obtenido en el punto 4. El nombre del archivo será el nombre de
//    usuario que se ingresa al inicio del programa.
//    Utilizar:
//   ✓ Una función que reciba la edad de un jugador y devuelva su categoría.
//   ✓ Una función que dados dos números a y b devuelva el porcentaje que representa b respecto de a

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int edad, genero, club;
    string categoria;

    cout << "Ingrese edad: " << endl;
    cin >> edad;
    // cout << "Ingrese el genero [1=Femenino 2=Masculino 3=No especificado]: " << endl;
    // cin >> genero;
    // cout << "Ingrese el club al que pertenece [1=Midland, 2=Gallito de Moron]: " << endl;
    // cin >> club;

    switch (edad) {
        case 0 ... 18:
            categoria = "Juvenil";
            break;
        case 19 ... 40:
            categoria = "Adulto";
            break;
        default:
            categoria = "Veterano";
            break;
    }

    cout << "La categoria del jugador es " << categoria << endl;

    return 0;
}