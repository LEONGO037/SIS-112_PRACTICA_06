// Materia: Programación I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 3
// Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la
// suma de sus elementos
#include<iostream>
#include<vector>
using namespace std;
//Funcion que suma los elementos de un vector
int SumaElementos(int[],int);
int main()
{
    int N;
    cout<<"Ingrese la longitud del vector: ";
    cin>>N;
    cout<<"Ingrese los elementos del vector:"<<endl;
    int Arreglo[N];
    for(int i=0;i<N;i++)
    {
        cin>>Arreglo[i];
    }
    cout<<"La suma de sus elementos es "<<SumaElementos(Arreglo, N-1)<<endl;
    return 0;
}
int SumaElementos(int A[],int i)
{
    if(i==-1)
        return 0;
    else
        return A[i]+SumaElementos(A,i-1);
}
