#include <iostream>

using namespace std;

///calcular el area de un circulo
///declarar variables area, radio y pi
///colocamos el valor de pi en la constante
///pedirle al usuario el radio del circulo  y guaradarlo en radio
///calculamos el area multiplicando (pi * radio * radio)
///mostramos el arear al usuario

int main(){

    double area, radio, pi;

    pi = 3,14159;

    cout << "Ingrese el radio del circulo para calcular su area: ";
    cin >> radio;

    area = pi * (radio * radio);

    cout << "El area del circulo es de: " << area << endl;



return 0;
}
