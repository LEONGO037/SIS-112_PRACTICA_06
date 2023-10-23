// Autor: Leonardo Delgado Medrano
// Fecha creaci�n: 22/10/2023
// Fecha modificaci�n: 22/10/2023
// N�mero de ejericio: 4
// Problema planteado: Realizar un algoritmo recursivo que escriba al rev�s una cadena
#include <iostream>
#include <string>
using namespace std;
//Funcion que imprime la cadena al reves
void reverseString(const string&, int);
int main()
{
    string input;
    cout << "Ingrese una cadena: ";
    cin >> input;
    int length = input.length() - 1;
    cout << "Cadena al reves: ";
    reverseString(input, length);
    cout << endl;
    return 0;
}
void reverseString(const string& str, int index)
{
    if (index == 0)
    {
        cout << str[index];
        return;
    }
    cout << str[index];
    reverseString(str, index - 1);
}
