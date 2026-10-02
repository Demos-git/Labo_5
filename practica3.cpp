#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
string color;

int main () {

    cout << "De que color es el semaforo?" << endl;
    cout << "R. Rojo " << endl;
    cout << "A. Amarillo" << endl;
    cout << "V. Verde" << endl;
    cin >> color;

    switch (color[0])
    {
    case 'R':
    case 'r':
        cout << "El semaforo esta en rojo." << endl;
        break;
    case 'A':
    case 'a':
        cout << "El semaforo esta en amarillo." << endl;
        break;
    case 'V':
    case 'v':
        cout << "El semaforo esta en verde." << endl;
        break;
    
    default:
        cout << "Opcion no valida." << endl;
        break;
    }

    return 0;
}
