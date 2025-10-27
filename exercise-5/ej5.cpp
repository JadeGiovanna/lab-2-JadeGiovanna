#include <iostream>
using namespace std;

int main() {

    cout << "*********" << endl;
    cout << "x   f(x)" << endl;
    cout << "*********" << endl;
    
    for(int x = 0; x <= 5; x++) {
        int resultado = (x * x * x) - (x * x) + 5;
        cout << x << "   " << resultado << endl;
    }
    
    cout << "*********" << endl;
    
    return 0;
}