#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;
    
    cout << "===== KALKULATOR =====" << endl;
    cout << "Wpisz pierwszą liczbę: ";
    cin >> num1;
    
    cout << "Wpisz operację (+, -, *, /): ";
    cin >> operation;
    
    cout << "Wpisz drugą liczbę: ";
    cin >> num2;
    switch(operation) {
        case '+':
            result = num1 + num2;
            cout << "\nWynik: " << num1 << " + " << num2 << " = " << result << endl;
            break;
            case '-':
            result = num1 - num2;
            cout << "\nWynik: " << num1 << " - " << num2 << " = " << result << endl;
            break;
case '*':
            result = num1 * num2;
            cout << "\nWynik: " << num1 << " * " << num2 << " = " << result << endl;
            break;
            
        case '/':
            if (num2 == 0) {
                cout << "\nBłąd! Dzielenie przez zero jest niemożliwe!" << endl;
            } else {
                result = num1 / num2;
                cout << "\nWynik: " << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
            
        default:
            cout << "\nBłąd! Nieznana operacja!" << endl;

    }
    return 0;
}