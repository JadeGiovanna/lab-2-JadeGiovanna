//Escriba un programa con for que lea tres números enteros del teclado e imprima la suma, el promedio, el producto, el más pequeño y el más grande de estos números.
#include <iostream>
using namespace std;
int main(){
    int nums [3];
    int suma=0;
    for (int i=0; i<3; i++){
        cout<<"Ingrese los numeros: ";
        cin>>nums[i];
        suma+=nums[i];
    }
    double promedio = suma/3;
    int producto = nums[0]*nums[1]*nums[2];
    int mayor = nums[0];
    int menor = nums[0];
    for (int i=1; i<3; i++){
        if (nums[i]>mayor){
            mayor=nums[i];
        }
        if (nums[i]<menor){
            menor=nums[i];
        }
    }
    cout<<"La suma es: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
    cout<<"El producto es: "<<producto<<endl;
    cout<<"El numero mayor es: "<<mayor<<endl;
    cout<<"El numero menor es: "<<menor<<endl;
    return 0;

}