#include <iostream>

using namespace std;

///sumar numeros, verificar numeros pares o impares,
///convertir de celsiuus a fahrenheit, mostrar la table del cinco, y por lima opcion salir

///Declaro las variables y los numeros a utilizar en las operaciones
///Pido al usuario que ingrese el menu a utlizar elgiendo entre las 5 opciones diferentes y asignamos el menu elegido a la opcion
///En el switch dependiendo la opcion entramos a los diferentes case
///en el primer case pedimos al usuario los numeros a sumar y realizamos la operacion (num1 + num2) y mostramos su resultado
///en el segundo case pedimos el numero el cual si al ser dividido por 2 da como resultado 0 es par, si no es impar, al terminar mostramos su resultado
///en el tercer case pedimos los grados celsius al usuario, realizamos la operacion (celsius * 9/5 + 32) y mostramos su resultado


int main(){

    int opcion, resultado, num, celsius, i;
    double num1, num2;

    cout << "Ingrese el menu que desea utilizar " << endl;

    cout << "Sumar numeros = 1, Numeros pares o impares = 2, Celsius a fahrenheit = 3, Tabla del cinco = 4, Salir = 5 " << endl;
    cin >> opcion;

    switch (opcion){

    case 1:
        cout << "Ingrese el primer numero que desea sumar: " << endl;
        cin >> num1;
        cout << "Ingrese el segundo numero que desea sumar: " << endl;
        cin >> num2;
        resultado = num1 + num2;
        cout << "Resultado de la operacion es " << resultado << endl;
        break;

    case 2:
        cout << "Ingrese el numero que desea saber si es par o impar: " << endl;
        cin >> num;
        if(num % 2 == 0){
            cout << "El numero es par";
        } else {
            cout << "El numero es impar";
        }
        break;

    case 3:
        cout << "Ingrese los grados celsius que desea convertir a fahrenheit: " << endl;
        cin >> celsius;
        resultado = (celsius * 9/5)+ 32;
        cout << "Los grados fahrenheit son: " << resultado << endl;
        break;

    case 4:
        cout << "Ingrese el numero: " << endl;
        cin >> num;
        for(i=1; i<=10; i++){
            resultado = num * i;
            cout << i << "*" << num << "=" << resultado << endl;
            }
        break;

    case 5:
        break;

        }

    return 0;
}
