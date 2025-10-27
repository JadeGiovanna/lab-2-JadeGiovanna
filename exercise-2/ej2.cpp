//Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un múltiplo del segundo. 
#include <iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Ingrese un numero: ";
    cin>>num1;

    if (num1 % 2 == 0){
        cout<<num1<<" es par"<<endl;
    } else {
        cout<<num1<<" es impar"<<endl;
    }

    return 0;
}