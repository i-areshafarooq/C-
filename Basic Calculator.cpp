#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Basic Calculator" << endl;
    cout << "----------------" << endl;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            } else {
                cout << "Error! Division by zero is not allowed.";
            }
            break;
        default:
            cout << "Invalid operation! Please use +, -, *, or /.";
    }

    cout << endl;
    return 0;
}
