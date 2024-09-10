#include <iostream>

using namespace std;

int main(){

int num;

cout << "Ingrese el numero que desea saber si es par o impar: " << endl;
cin >> num;

        if( num % 2 == 0){
            cout << "El numero es par" << endl;
        }else{
            cout << "El numero es impar";
        }

return 0;
}
