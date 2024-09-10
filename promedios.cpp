#include <iostream>

using namespace std;

///programa que realize un promedio entre tres numeros que ingrese un usuario

///declaramos la variables de los numeros, numero1 numero2 numero3 (int) y promedio (double)
///le pedimos los numeros al usuario y guardamos
///realizamos la operacion que es sumar los tres numeros y dividirlos por 3 y guardamos en promedios
///le mostramos el promedio al usuario


int main(){


    double promedio;
    int numero1, numero2, numero3;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    cout << "Ingrese el tercer numero: ";
    cin >> numero3;

    promedio = (numero1 + numero2 + numero3) / 3;

    cout << "El promedio de los tres numeros ingresados es de: " << promedio << endl;

return 0;

}
