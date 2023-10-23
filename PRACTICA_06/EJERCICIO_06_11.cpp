// Materia: Programación I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creación: 19/10/2023
// Fecha modificación: 19/10/2023
// Número de ejericio: 6
// Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado un entero n > 1, calcule e
// imprima los elementos correspondientes a la conjetura de Ullman (en honor al matemático Ullman) que consiste en lo siguiente:
// • Empiece con cualquier entero positivo.
// • Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
// • Obtenga enteros sucesivamente repitiendo el proceso.
// Al final se obtendrá el número 1, independientemente del entero inicial. Por ejemplo, cuando el entero inicial es 26,
// la secuencia será: 26 13 40 20 10 5 16 8 4 2 1
#include<iostream>
using namespace std;
int Ullman(int);
int main ()
{
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    cout<<numero<<"\t";
    Ullman(numero);
    return 0;
}
int Ullman(int num)
{
    if(num==1)
        return 1;
    else if(num%2==0)
    {
        cout<<num/2<<"\t";
        Ullman(num/2);
    }
    else
    {
        cout<<num*3+1<<"\t";
        Ullman(num*3+1);
    }

}
