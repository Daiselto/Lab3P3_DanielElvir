#include <iostream>
using namespace std;
void menu() {
    cout << "1. Aproximacion de PI" << endl;
    cout << "2. Encontrar Numeros de la secuencia de Pell" << endl;
    cout << "3. Encontrar Numeros Amigos en un Rango" << endl;
    cout << "4. Salir" << endl;
    cout << "Escoja una de las opciones validas" << endl;
}

void ejercicio1() {
    int puntos;
    bool verify = true;
    cout << "Ingrese el total de puntos que se deben generar (tiene que ser mayor o igual a 1000000: ";
    cin >> puntos;
    while (verify){
        if (puntos>=1000000){

        } else {
            cout << "Ingrese un numero valido"
        }
    }

}

void ejercicio2() {

}

void ejercicio3() {

}

int main() {
    int opcion;
    bool seguir = true;
    while (seguir){
        menu();
        cin >> opcion;
        switch (opcion) {            
            case 1:                 
                cout << "En construccion el primero" << endl;
                break;
            case 2:
                cout << "En construccion el segundo" << endl;
                break;
            case 3:
                cout << "En construccion el tercero" << endl;
                break;
            case 4:
                cout << "Saliendo del Programa..." << endl;
                cout << "Gracias por usarlo :D" << endl;
                seguir = false;
                break;
            default:
                cout << "INGRESE UNA DE LAS OPCIONES VALIDAS" << endl;
                break;
        }
    }
   
}

