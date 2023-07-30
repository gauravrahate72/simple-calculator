#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Cannot divide by zero." <<endl;
                return 1; // Exit with an error code
            }
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operation. Please choose from +, -, *, or /." <<endl;
            return 1; // Exit with an error code
    }

    cout << "Result: " << result <<endl;

    return 0;
}