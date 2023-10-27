#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void menu() {
    cout << "1. Aproximacion de PI" << endl;
    cout << "2. Encontrar Numeros de la secuencia de Pell" << endl;
    cout << "3. Encontrar Numeros Amigos en un Rango" << endl;
    cout << "4. Salir" << endl;
    cout << "Escoja una de las opciones validas" << endl;
}

void ejercicio1() {    
    double puntos;
    double puntosDentro=0;
    double valorPI;
    bool verify = true;
    cout << "Ingrese el total de puntos que se deben generar (tiene que ser mayor o igual a 1000000): ";
    cin >> puntos;
    while (verify){
        if (puntos>=1000000){
            for (int i = 0; i < puntos; i++) {
                double x = (rand() / (double)RAND_MAX) * 2.0 - 1.0;
                double y = (rand() / (double)RAND_MAX) * 2.0 - 1.0;
                if (x*x+y*y<=1){
                    puntosDentro++;
                }
            }

            valorPI = 4 * (puntosDentro / puntos);

            cout << "Estimacion de PI usando Montecarlo con " << puntos << " puntos generados es: " << valorPI << endl;
            cout << "" << endl;
            break;
        } else {
            cout << "Ingrese un numero valido" << endl;
            cout << "Ingrese el total de puntos que se deben generar (tiene que ser mayor o igual a 1000000): ";
            cin >> puntos;
        }
    }

}   

int calcularPell(int n) {
    if (n==1 || n==0) {
        return n;
    } else if(n>=2) {
        return 2 * calcularPell(n - 1) + calcularPell(n - 2);
    }
}

void ejercicio2() {
    int n;
    int res;
    cout << "Ingrese n: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {                
        res = calcularPell(i);
        cout << "P(" << i << ") = " << res << endl;
    }
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
                ejercicio1();
                break;
            case 2:
                ejercicio2();
                break;
            case 3:
                ejercicio3();
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

