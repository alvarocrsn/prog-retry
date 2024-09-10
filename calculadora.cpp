#include <iostream>

using namespace std;

///declaramos 3 variables -> numero1, numero2 y resultado
///le pedimos al usuario que ingrese los numeros y guardamos los datos
///inicializamos las variables numero1 y numero2, con numeros cualq
///sumamos y guardamos en resultado
///mostramos resultados

int main() {

    double numero1, numero2, resultado; ///declaramos

    /*numero1 = 5;
    ///inicializamos
    numero2 = 10;*/

    cout << "Ingrese el primer numero para realizar las operaciones: ";///pedimos los numeros
    cin >> numero1; ///guardamos datos

    cout << "Ingrese el segundo numero para realizar las operaciones: ";
    cin >> numero2;

    resultado = numero1 + numero2; ///sumamos y guardamos
    cout << "El resultado de la suma es: " << resultado << endl; ///mostramos

    resultado = numero1 - numero2;
    cout << "El resultado de la resta es: " << resultado << endl;

    resultado = numero1 * numero2;
    cout << "El resultado de la multiplicacion es: " << resultado << endl;

    resultado = numero1 / numero2;
    cout << "El resultado de la division es: " << resultado << endl;

return 0;
}
