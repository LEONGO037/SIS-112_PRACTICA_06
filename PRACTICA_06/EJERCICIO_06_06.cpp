// Materia: Programación I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creación: 19/10/2023
// Fecha modificación: 19/10/2023
// Número de ejericio: 6
// Problema planteado: Realizar un algoritmo recursivo para la siguiente función:
#include<iostream>
#include<cmath>
using namespace std;
int QdeN (int);
int main()
{
    int numero;
    cout<<"Ingrese el valor de N ";
    cin>>numero;
    cout<<"El resultado es "<<QdeN(numero);
    return 0;
}
int QdeN (int num)
{
    if(num==1)
        return 1;
    else
        return pow(num,2)+QdeN(num-1);
}
