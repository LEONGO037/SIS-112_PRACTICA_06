// Materia: Programaci�n I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creaci�n: 22/10/2023
// Fecha modificaci�n: 22/10/2023
// N�mero de ejericio: 7
// Problema planteado: Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
// comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
// conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
// m�s en ser tambi�n productiva, �cu�ntos pares de conejos podr� poner a la
// venta el granjero al cabo de un a�o?
#include <iostream>
using namespace std;
//Funcion que calcula la cantidad de conejos
int calcularConejos(int);
int main()
{
    int meses = 12;
    int totalConejos = calcularConejos(meses);
    cout << "Numero de parejas de conejos al cabo de un anio: " << totalConejos << endl;
    return 0;
}
int calcularConejos(int meses)
{
    if (meses <= 0)
        return 1;
    return calcularConejos(meses - 1) + calcularConejos(meses - 2);
}

