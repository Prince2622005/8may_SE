#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    Calculator() : num1(0), num2(0) {}

    void inputNumbers() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero not allowed." << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calculator;
    int choice;

    cout << "Simple Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    calculator.inputNumbers();

    switch (choice) {
        case 1:
            cout << "Result: " << calculator.add() << endl;
            break;
        case 2:
            cout << "Result: " << calculator.subtract() << endl;
            break;
        case 3:
            cout << "Result: " << calculator.multiply() << endl;
            break;
        case 4:
            cout << "Result: " << calculator.divide() << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}


