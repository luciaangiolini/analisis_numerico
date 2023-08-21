//
// Created by Luchi on 18/8/2023.
//
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include "raices.h"
using namespace std;
double funcion_1(double x){
    return exp(-x) -x;
}
double funcion_2(double x) {
    return -0.874* pow(x, 2) + 1.750*x + 2.627;
}

double funcion_3(double x) {
    return -23.330 + 79.350*x - 88.090 * pow(x, 2) + 41.600* pow(x, 3) - 8.6800 * pow(x, 4) + 0.658 * pow(x, 5);
}

double funcion_4(double x) {
    return log(x) - 5;
}

double funcion_5(double x) {
    return (1-0.6*x)/x;
}

void biseccion() {
    double a, b, c, ep, interv_izq, interv_der;
    int opcion_error, opcion_funcion;
    cout << "METODO DE LA BISECCION PARA ENCONTRAR RAICES DE FUNCIONES" << endl;
    cout << "En que funcion desea encontrar la raiz (indicar con el numero de la funcion): " << endl;
    cout << "1- f(x) = (e^(-x))-x" << endl;
    cout << "2- f(x) = -0.874(x^2) + 1.750x + 2.627" << endl;
    cout << "3- f(x) = -23.330 + 79.350x - 88.090(x^3) + 41.600(x^3) - 8.6800(x^4) + 0.658(x^5)" << endl;
    cout << "4- f(x) = ln(x) - 5" << endl;
    cout << "5- f(x) = (1-0.6x)/x" << endl;
    cin >> opcion_funcion;
    cout << "Ingrese el extremo izquierdo del intervalo: " << endl;
    cin >> a;
    cout << "Ingrese el extremo derecho del intervalo: " << endl;
    cin >> b;
    interv_izq = a;
    interv_der = b;
    c = (a + b) / 2;
    switch (opcion_funcion) {
        case 1:
            cout << "Seleccione el error permitido: " << endl;
            cout << "1- 0.001" << endl << "2- 0.0001" << endl;
            cin >> opcion_error;
            if (opcion_error==1)
                ep = 0.001;
            else
                ep = 0.0001;
            while (abs(b - a) > ep) {
                if (funcion_1(c) == 0.0)
                    break;
                else if (funcion_1(c) * funcion_1(a) < 0)
                    b = c;
                else
                    a = c;
                c = (a + b) / 2;
            }
            cout << "El valor de la raiz en el intervalo (" << interv_izq << ", " << interv_der << ") es: " << c << endl;
        case 2:
            cout << "Seleccione el error permitido: " << endl;
            cout << "1- 0.001" << endl << "2- 0.0001" << endl;
            cin >> opcion_error;
            if (opcion_error==1)
                ep = 0.001;
            else
                ep = 0.0001;
            while (abs(b - a) > ep) {
                if (funcion_2(c) == 0.0)
                    break;
                else if (funcion_2(c) * funcion_2(a) < 0)
                    b = c;
                else
                    a = c;
                c = (a + b) / 2;
            }
            cout << "El valor de la raiz en el intervalo (" << interv_izq << ", " << interv_der << ") es: " << c << endl;
        case 3:
            cout << "Seleccione el error permitido: " << endl;
            cout << "1- 0.001" << endl << "2- 0.0001" << endl;
            cin >> opcion_error;
            if (opcion_error==1)
                ep = 0.001;
            else
                ep = 0.0001;
            while (abs(b - a) > ep) {
                if (funcion_3(c) == 0.0)
                    break;
                else if (funcion_3(c) * funcion_3(a) < 0)
                    b = c;
                else
                    a = c;
                c = (a + b) / 2;
            }
            cout << "El valor de la raiz en el intervalo (" << interv_izq << ", " << interv_der << ") es: " << c << endl;
        case 4:
            cout << "Seleccione el error permitido: " << endl;
            cout << "1- 0.001" << endl << "2- 0.0001" << endl;
            cin >> opcion_error;
            if (opcion_error==1)
                ep = 0.001;
            else
                ep = 0.0001;
            while (abs(b - a) > ep) {
                if (funcion_4(c) == 0.0)
                    break;
                else if (funcion_4(c) * funcion_4(a) < 0)
                    b = c;
                else
                    a = c;
                c = (a + b) / 2;
            }
            cout << "El valor de la raiz en el intervalo (" << interv_izq << ", " << interv_der << ") es: " << c << endl;
        case 5:
            cout << "Seleccione el error permitido: " << endl;
            cout << "1- 0.001" << endl << "2- 0.0001" << endl;
            cin >> opcion_error;
            if (opcion_error==1)
                ep = 0.001;
            else
                ep = 0.0001;
            while (abs(b - a) > ep) {
                if (funcion_5(c) == 0.0)
                    break;
                else if (funcion_5(c) * funcion_5(a) < 0)
                    b = c;
                else
                    a = c;
                c = (a + b) / 2;
            }
            cout << "El valor de la raiz en el intervalo (" << interv_izq << ", " << interv_der << ") es: " << c << endl;
    }
}

double funcion_g(double x){
    return exp(-x);
}

void punto_fijo(){
    double a, b, ep;
    cout << "METODO DEL PUNTO FIJO PARA ENCONTRAR UNA RAIZ DE FUNCIONES" << endl;
    cout << "Ingrese el extremo izquierdo del intervalo: " << endl;
    cin >> a;
    cout << "Ingrese el extremo derecho del intervalo: " << endl;
    cin >> b;
    cout << "Ingrese el error permitido: " << endl;
    cin >> ep;
    double interv_izq = a;
    double interv_der = b;
    while (abs(funcion_g(a)-a)>ep){
        a = funcion_g(a);
    }
    cout << "El valor de la raiz en el intervalo (" << interv_izq << ", " << interv_der << ") es: " << a << endl;
}

double funcion_derivada(double x){
    return -exp(-x) - 1;
}

double f_r_nr(double x){
    return x - (funcion_1(x)/funcion_derivada(x));
}

void newton_raphson(){
    double a, b, ep;
    cout << "METODO DE NEWTON-RAPHSON PARA ENCONTRAR UNA RAIZ DE FUNCIONES" << endl;
    cout << "Ingrese el extremo izquierdo del intervalo: " << endl;
    cin >> a;
    cout << "Ingrese el extremo derecho del intervalo: " << endl;
    cin >> b;
    cout << "Ingrese el error permitido: " << endl;
    cin >> ep;
    double interv_izq = a;
    double interv_der = b;
    while (abs(f_r_nr(a)-a)>ep){
        a = f_r_nr(a);
    }
    cout << "El valor de la raiz en el intervalo (" << interv_izq << ", " << interv_der << ") es: " << a << endl;
}

double f_r_s(double x, double y){
        return y-((funcion_1(y)*(x-y))/(funcion_1(x)-funcion_1(y)));
}

void secante(){
    double a, b, ep;
    cout << "METODO DE LA SECANTE PARA ENCONTRAR UNA RAIZ DE FUNCIONES" << endl;
    cout << "Ingrese el extremo izquierdo del intervalo: " << endl;
    cin >> a;
    cout << "Ingrese el extremo derecho del intervalo: " << endl;
    cin >> b;
    cout << "Ingrese el error permitido: " << endl;
    cin >> ep;
    double interv_izq = a;
    double interv_der = b;
    while (abs(b- f_r_s(a, b))>ep){
        b = f_r_s(a, b);
    }
    cout << "El valor de la raiz en el intervalo (" << interv_izq << ", " << interv_der << ") es: " << b << endl;
}

