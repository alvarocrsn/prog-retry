#include <iostream>

using namespace std;

int main (){

    double peso, altura, imc;

    cout << "Ingrese su peso: ";
    cin >> peso;

    cout << "Ingrese su altura: ";
    cin >> altura;

    imc = peso / (altura * altura);

    if (imc < 18.5){
        cout << "Su indice de masa muscular es " << imc << " Usted tiene bajo peso" << endl;

    } else if (imc >=18.5 && imc < 24.9){
        cout << "Su indice de masa muscular es " << imc << " Usted tiene un peso normal" << endl;

    } else if (imc > 25 && imc < 30){
        cout << "Su indice de masa muscular es " << imc << " Usted tiene sobrepeso" << endl;

    } else {
        cout << "Su indice de masa muscular es " << imc << " Usted tiene mucho sobrepeso" << endl;
    }

return 0;
}
