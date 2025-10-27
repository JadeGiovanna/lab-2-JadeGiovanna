// Escriba un programa de C ++ que lea tres números del teclado y encuentre el número del medio entre los tres números. 
//Suponga que los tres números son diferentes. 
//[Sugerencia: encuentre primero los valores más grandes y más pequeños.]

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, menor, mayor, medio;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    if (num1 > num2) {
        if (num1 > num3) {
            mayor = num1;
            if (num2 > num3) {
                medio = num2;
                menor = num3;
            } else {
                medio = num3;
                menor = num2;
            }
        } else {
            mayor = num3;
            medio = num1;
            menor = num2;
        }
    } else {
        if (num2 > num3) {
            mayor = num2;
            if (num1 > num3) {
                medio = num1;
                menor = num3;
            } else {
                medio = num3;
                menor = num1;
            }
        } else {
            mayor = num3;
            medio = num2;
            menor = num1;
        }
    }

    cout << endl << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    cout << "El numero del medio es: " << medio << endl;

    return 0;
}