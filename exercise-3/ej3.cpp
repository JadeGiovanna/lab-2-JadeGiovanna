//Escriba un programa que ingrese un número de cinco dígitos, divida el número en sus dígitos individuales e imprima los dígitos separados entre sí por tres espacios cada uno. [Sugerencia: use la división entera y el operador de módulo.] Por ejemplo, si el usuario ingresa 42339, el programa debe imprimir lo que se muestra en la salida de ejemplo.
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Ingrese un numero de cinco digitos: ";
    cin>>num;

    int dig1 = num / 10000;
    int dig2 = (num / 1000) % 10;
    int dig3 = (num / 100) % 10;
    int dig4 = (num / 10) % 10;
    int dig5 = num % 10;

    cout<<dig1<<"   "<<dig2<<"   "<<dig3<<"   "<<dig4<<"   "<<dig5<<endl;

    float R1 = (float)24 / 5;
    int R2 = 18 % 3;
    int R3 = 13 % 9;
    int R4 = 13 / 2 % 2;

    cout<<"Resultados de las operaciones:"<<endl;
    cout<<"24 / 5 = "<<R1<<endl;
    cout<<"18 % 3 = "<<R2<<endl;
    cout<<"13 % 9 = "<<R3<<endl;
    cout<<"13 / 2 % 2 = "<<R4<<endl;

    return 0;
}