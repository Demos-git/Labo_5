#include <iostream>
#include <windows.h>

using namespace std;

int figura;
float altura, base, lado, radio;

int main()
{

    SetConsoleOutputCP(CP_UTF8);

    cout << "¿De que figura quieres calcular el área?" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Cuadrado" << endl;
    cin >> figura;

    switch (figura)
    {
    case 1:
        if (radio >= 0)

        {
            cout << "Ingresa su radio en cm: ";
            cin >> radio;
            cout << "Su área es de " << 3.141592653589793 * radio * radio << " cm²";
        }
        else
        {
            cout << "Dato erroneo";
        }

        break;
    case 2:

        if (altura >= 0 && base >= 0)
        {
            cout << "Ingresa su altura (h) en cm: ";
            cin >> altura;
            cout << "Ingresa su base (b) en cm: ";
            cin >> base;
            cout << "Su área es de " << base * altura << " cm²";
        }
        else
        {
            cout << "Dato erroneo";
        }

        break;
    case 3:
        if (lado >= 0)
        {
            cout << "Ingresa uno de sus lados en cm: ";
            cin >> lado;
            cout << "Su área es de " << lado * lado << " cm²";
        }
        else
        {
            cout << "Dato erroneo";
        }

        break;

    default:
        cout << "Dato erroneo";
        break;
    }

    return 0;
}