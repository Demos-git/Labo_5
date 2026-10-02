#include <iostream>
#include <windows.h>

using namespace std;

int dia;
int main () {

    SetConsoleOutputCP(CP_UTF8);

    cout << "Ingresa un número (1-7): ";
    cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "El día es lunes";
        break;
    case 2:
        cout << "El día es martes";
        break;
    case 3:
        cout << "El día es miércoles";
        break;
    case 4:
        cout << "El día es jueves";
        break;
    case 5:
        cout << "El día es viernes";
        break;
    case 6:
        cout << "El día es sábado";
        break;
    case 7:
        cout << "El día es domingo";
        break;
    
    default:
        cout << "dato erroneo";
        break;
    }
    return 0;
}
