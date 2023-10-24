#include <iostream>
using namespace std;

int main() {
    char operador;
    double numero1, numero2;

    cout << "Ingresa un operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingresa dos n�meros: ";
    cin >> numero1 >> numero2;

    double resultado;

    switch (operador) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;
                return 1;  // Salir del programa con un c�digo de error
            }
            break;
        default:
            cout << "Operador no v�lido. Por favor, ingresa un operador v�lido (+, -, *, /)." << endl;
            return 1;  // Salir del programa con un c�digo de error
    }

    cout << "El resultado es: " << resultado << endl;

    return 0;
}

