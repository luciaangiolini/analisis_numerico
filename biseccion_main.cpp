//
// Created by Luchi on 8/8/2023.
//
#include "conio.h"
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include <iostream>
using namespace std;

double funcion(double x);
double biseccion(double a, double b, double ep);

int main(){
    double n, m, ep;
    cout << "Ingrese el extremo izquierdo del intervalo: " << endl;
    cin >> n;
    cout << "Ingrese el extremo derecho del intervalo: " << endl;
    cin >> m;
    cout << "Ingrese el error permitido: " << endl;
    cin >> ep;
    cout << "El valor de la raiz en el intervalo (" << n << ", " << m << ") es: " << biseccion(n, m, ep) << endl;
    }

double funcion(double x){
    return exp(-x) -x;
}

double biseccion(double a, double b, double ep) {
    double c = (a + b) / 2;
    while (abs(b - a) > ep) {
        if (funcion(c) == 0.0)
            break;
        else if (funcion(c) * funcion(a) < 0)
            b = c;
        else
            a = c;
        c = (a + b) / 2;
    }
    return c;
    }
