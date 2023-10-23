// Materia: Programación I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 5
// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales.
#include <iostream>
#include <vector>
using namespace std;
//Funcion que verifica que sean iguales los vectores
bool sonIguales(int[], int[], int);
//Funcion para ingresar los datos de los vectores
void IngresarDatos(int[],int);
int main()
{
    int longitud;
    cout<<"Ingrese la longitud de los vectores: ";
    cin>>longitud;
    int vector1[longitud], vector2[longitud];
    cout<<"Ingrese los datos del primer vector"<<endl;
    IngresarDatos(vector1,longitud);
    cout<<"Ingrese los datos del segundo vector"<<endl;
    IngresarDatos(vector2,longitud);
    if (sonIguales(vector1, vector2, longitud-1))
        cout << "Los vectores son iguales." << endl;
    else
        cout << "Los vectores no son iguales." << endl;
    return 0;
}
bool sonIguales(int vector1[], int vector2[], int index)
{
    if (index < 0)
        return true;
    if (vector1[index] == vector2[index])
        return sonIguales(vector1, vector2, index - 1);
    return false;
}
void IngresarDatos(int A[], int N)
{
    for(int i=0;i<N;i++)
        cin>>A[i];
}
