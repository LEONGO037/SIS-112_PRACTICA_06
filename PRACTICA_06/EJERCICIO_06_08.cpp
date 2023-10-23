// Materia: Programación I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creación: 22/10/2023
// Fecha modificación: 22/10/2023
// Número de ejericio: 8
// Problema planteado: Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es simétrica
#include <iostream>
#include <string>
using namespace std;
bool esSimetrica(const string&, int, int);
int main()
{
    string cadena;
    cout << "Ingrese una cadena de caracteres: ";
    cin >> cadena;
    int inicio = 0;
    int fin = cadena.length() - 1;
    if (esSimetrica(cadena, inicio, fin))
        cout << "La cadena es simetrica." << endl;
    else
        cout << "La cadena no es simetrica." << endl;
    return 0;
}
bool esSimetrica(const string& cadena, int inicio, int fin)
{
    if (inicio >= fin)
        return true;

    if (cadena[inicio] == cadena[fin])
        return esSimetrica(cadena, inicio + 1, fin - 1);
    return false;
}
