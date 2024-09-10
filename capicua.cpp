#include <iostream>

using namespace std;

int pedirNumero(){
    int numeroIngresado;
    cout << "Ingrese un numero entero positivo: " << endl;
    cin >> numeroIngresado;

    return numeroIngresado;
}

void sumarDigitos(){

    int numero = pedirNumero();
    int suma = 0;

    while (numero > 0){

        suma += numero % 10; /// se obtiene el resto del numero
        numero /= 10; ///se divide el numero para obtener numero entero
    }

   cout << "La suma de los digitos es: " << suma << endl;

}

void calcularFactorial(){

    int numero = pedirNumero();
    int factorial = 1;

    for(int i =1; i <= numero; ++i){
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es " << factorial << endl;
}

void capicua(){

    int numeroIngresado = pedirNumero();
    int numeroOriginal = numeroIngresado;
    int numeroInvertido = 0;

    while(numeroIngresado > 0){

        numeroInvertido = numeroInvertido * 10 + (numeroIngresado % 10);

        numeroIngresado /= 10;
    }

    if(numeroOriginal == numeroInvertido){
        cout << numeroOriginal << " es un capicua " << numeroInvertido << endl;
    } else {
        cout << numeroOriginal << " no es un capicua " << numeroInvertido << endl;
    }
}


int main(){

    int opcion;

    do{
        cout << "Menu de opciones" << endl;
        cout << "1. Sumar Digitos" << endl;
        cout << "2. Factorial de un numero" << endl;
        cout << "3. Numeros Capicua" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;

        switch(opcion){
            case 1: sumarDigitos();
            break;
            case 2: calcularFactorial();
            break;
            case 3: capicua();
            default:
            break;


        }
        cout << endl;

    }while(opcion != 4);



    return 0;
}
