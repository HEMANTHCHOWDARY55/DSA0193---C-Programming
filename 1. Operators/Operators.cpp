#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Addition
    int sum = num1 + num2;
    cout << "Addition: " << num1 << " + " << num2 << " = " << sum << endl;

    // Subtraction
    int difference = num1 - num2;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << difference << endl;

    // Multiplication
    int product = num1 * num2;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << product << endl;

    // Division
    if (num2 != 0) {
        int quotient = num1 / num2;
        cout << "Division: " << num1 << " / " << num2 << " = " << quotient << endl;
    } else {
        cout << "Error: Cannot divide by zero." << endl;
    }

    // Modulo
    if (num2 != 0) {
        int remainder = num1 % num2;
        cout << "Modulo: " << num1 << " % " << num2 << " = " << remainder << endl;
    } else {
        cout << "Error: Cannot perform modulo by zero." << endl;
    }

    return 0;
}
