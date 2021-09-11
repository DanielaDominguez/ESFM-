#include <iostream>
#include <stdlib.h>
#include "conio.h"

using namespace std;

int main() {
    int B,b,h;
    
    cout << "Ingrese la base mayor ";
    cin >> B;
    cout << "Favor ingresar base menor ";
    cin >> b;
    cout << "ingresar la altura del trapecio ";
    cin >> h;
    
    cout <<"El area del trapecio es: " <<(h*((B+b)/2));
    
    _getch();
}
