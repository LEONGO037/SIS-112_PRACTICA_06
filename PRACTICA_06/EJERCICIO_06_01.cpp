// Materia: Programaci�n I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creaci�n: 19/10/2023
// Fecha modificaci�n: 19/10/2023
// N�mero de ejericio: 1
// Problema planteado: Realizar un algoritmo recursivo para calcular el m�ximo com�n divisor de dos n�meros enteros aplicando el algoritmo de Euclides.
#include<iostream>
using namespace std;
//Funcion que saca el mcd con el algortmo de Euclides
int Euclides (int, int);
int main ()
{
    int numero1, numero2;
    cout<<"Ingrese dos numeros"<<endl;
    cin>>numero1>>numero2;
    if(numero1>numero2)
        cout<<"El maximo comun divisor es "<<Euclides(numero1, numero2);
    else
        cout<<"El maximo comun divisor es "<<Euclides(numero2, numero1);
    return 0;
}
int Euclides (int num1, int num2)
{
    if(num2==0)
        return num1;
    else
        return Euclides(num2, num1%num2);
}
