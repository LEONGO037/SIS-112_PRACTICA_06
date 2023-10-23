// Materia: Programación I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creación: 19/10/2023
// Fecha modificación: 19/10/2023
// Número de ejericio: 10
// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
// la lectura de dos números enteros, a partir de la relación
#include <iostream>
#include <wchar.h>
using namespace std;
unsigned int factorial(unsigned int);
int main()
{
    unsigned int n, m;
    setlocale(LC_ALL, "");
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de m: ";
    cin >> m;
    cout<<"El valor del coeficiente binomial es "<<factorial(n)/(factorial(n-m)*factorial(m));
    return 0;
}

//Muestra el factorial de un número
unsigned int factorial(unsigned int n)
{
    if (n == 0) // Condición de SALIDA - CASO BASE
        n = 1;
    else
        n = n * factorial(n-1);
    return n;
}
