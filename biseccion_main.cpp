//
// Created by Luchi on 8/8/2023.
//
#include "conio.h"
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include <iostream>
using namespace std;

float funcion(float x);

int main(){
    float f, a, b, c, c_anterior, ep, error;
    cout << "Ingrese el extremo izquierdo del intervalo: " << endl;
    cin >> a;
    cout << "Ingrese el extremo derecho del intervalo: " << endl;
    cin >> b;
    cout << "Ingrese el error permitido: " << endl;
    cin >> ep;
    c = 0;
    if ( funcion(a) * funcion(b) > 0){
        cout << "La funcion no tiene raiz en este intervalo --> (" << a << ";" << b << ")" <<endl;
    }else{
        cout << "Int. Izq    " << "Int. Der.    " << "Medio    " << "Error    " << endl;
        do {
            c_anterior = c;
            c = (a + b) / 2;
            error = abs(c-c_anterior);
            f = funcion(a) * funcion(b);
            if (f < 0){
                b = c;
            }else if(f > 0){
                a = c;
            }else{
                error = 0;
            }
            cout << setprecision(4) << a << "          " << setprecision(4) << b << "          " << setprecision(4) << c << "          " << setprecision(4) << error << endl;
        } while (error>ep);
        cout << "El ultimo valor de 'Medio' es el valor de la raiz" << endl;
    }

}

float funcion(float x){
    float f = pow(x, 2) - 2;
    return f;
}

