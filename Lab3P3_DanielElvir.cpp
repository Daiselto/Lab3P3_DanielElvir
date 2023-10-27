#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale>
using namespace std;
void menu() {
    setlocale(LC_ALL, "spanish");
    cout << "MENÚ PRINCIPAL LAB 3 DANIEL ELVIR" << endl;
    cout << "1. Aproximación de PI" << endl;
    cout << "2. Encontrar Números de la secuencia de Pell" << endl;
    cout << "3. Encontrar Números Amigos en un Rango" << endl;
    cout << "4. Salir" << endl;
    cout << "Escoja una de las opciones válidas" << endl;
}

void ejercicio1() {    
    setlocale(LC_ALL, "spanish");
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

            cout << "Estimación de PI usando Montecarlo con " << puntos << " puntos generados es: " << valorPI << endl;
            cout << "" << endl;
            verify = false;
        } else {
            cout << "Ingrese un número válido" << endl;
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
    cout << "" << endl;
}

int sumaDivisoresPropios(int n) {
    int sumaTotal=1;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            sumaTotal += i;
        }
    }
    return sumaTotal;
}

void ejercicio3() {
    setlocale(LC_ALL, "spanish");
    int num2;
    int num3;
    for (int num1 = 1; num1 <= 10000; num1++) {
        num2 = sumaDivisoresPropios(num1);
        num3 = sumaDivisoresPropios(num2);
        if (num2!=num1 && num1==num3){
            if (num2 > num1) {
                cout << num1 << " y " << num2 << " son números amigos." << endl;
            }
        }
    }
    cout << "" << endl;
}

int main() {
    setlocale(LC_ALL, "spanish");
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
                cout << "INGRESE UNA DE LAS OPCIONES VÁLIDAS" << endl;
                break;
        }
    }
   
}

