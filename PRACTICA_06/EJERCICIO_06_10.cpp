// Materia: Programaci�n I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creaci�n: 19/10/2023
// Fecha modificaci�n: 19/10/2023
// N�mero de ejericio: 10
// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
// la lectura de dos n�meros enteros, a partir de la relaci�n
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

//Muestra el factorial de un n�mero
unsigned int factorial(unsigned int n)
{
    if (n == 0) // Condici�n de SALIDA - CASO BASE
        n = 1;
    else
        n = n * factorial(n-1);
    return n;
}
