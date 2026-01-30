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

    }
    return 0;
}