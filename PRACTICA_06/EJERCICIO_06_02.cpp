// Materia: Programación I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creación: 19/10/2023
// Fecha modificación: 19/10/2023
// Número de ejericio: 2
// Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos.
#include<iostream>
using namespace std;
//Funcion que va sacando los valores de la secuencia
int Secuencia(int);
//Funcion que saca la suma de los terminos de un numero
int SumaTerminos(int);
int main ()
{
    int cantidad;
    cout<<"Ingrese la cantidad de terminos que tendra la secuencia"<<endl;
    cin>>cantidad;
    for(int i=1;i<=cantidad;i++)
        cout<<Secuencia(i)<<"\t";
    return 0;
}
int Secuencia(int num)
{
    int n=1;
    if(num==1 || num==2)
         n=1;
    else
         n=SumaTerminos(Secuencia(num-1))+Secuencia(num-1);
    return n;

}
int SumaTerminos(int num)
{
    if(num==0)
        num = 0;
    else
        return (num%10)+SumaTerminos(num/10);
}
