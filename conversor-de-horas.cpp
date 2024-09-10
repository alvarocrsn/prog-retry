#include <iostream>

using namespace std;

///el usuario ingresa una determinada cantidad de horas
///y el programa le debe mostrar cuantos minutos son

///declaramos la variable horas y minutos
///le pedimos al usuario que ingrese la cantidad de horas y guardamos su resultado
///realizamos la operacion de conversion (multiplicar horas por 60)
///mostramos los minutos al usuario

int main() {

   int horas, minutos;

   cout << "Ingrese la cantidad de horas que desea convertir a minutos: ";
   cin >> horas;

   minutos = horas * 60;
   cout << "La cantidad de minutos son: " << minutos << endl;

return 0;
}
