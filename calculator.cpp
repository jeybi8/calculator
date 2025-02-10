#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    
    cout << "Enter First Num: ";
    cin >> num1;
    cout << "Enter Second Num: ";
    cin >> num2;
    cout << "What Operation: +, -, /, *: ";
    cin >> operation;

    
switch (operation) {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            
        cout << "Result: " << num1 / num2 << endl;
    } else {
        cout << "Error: Cannot divide by zero." << endl;
    }
        break;
        default:
            cout << "Invalid operation!" << endl;
    }
    
    return 0;
}