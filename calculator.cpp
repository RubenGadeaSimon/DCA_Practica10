#include <iostream>

using namespace std;

int main() {
    char operador;
    double num1, num2, resultado;
    //Implementados cambios para poder realizar la resta
    
    // Solicitar al usuario que ingrese la operación
    cout << "¿Que operacion quieres realizar?(+ , -): ";
    cin >> operador;

    // Solicitar al usuario que ingrese dos números
    cout << "Primer numero: ";
    cin >> num1;

    cout << "Segundo numero: ";
    cin >> num2;

    // Realizar la operación seleccionada
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        default:
            cout << "Operador no valido." << endl;
            return 1;  // Salir con código de error
    }

    // Mostrar el resultado
    cout << "Resultado: " << resultado << endl;

    return 0;
}
