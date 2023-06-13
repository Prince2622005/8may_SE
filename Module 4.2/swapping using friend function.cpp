#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}

    friend void swapNumbers(Number& num1, Number& num2);
    void displayNumber() {
        cout << "Number: " << num << endl;
    }
};

void swapNumbers(Number& num1, Number& num2) {
    num1.num = num1.num + num2.num;
    num2.num = num1.num - num2.num;
    num1.num = num1.num - num2.num;
}

int main() {
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    Number num1(n1);
    Number num2(n2);

    cout << "\nBefore swapping:" << endl;
    num1.displayNumber();
    num2.displayNumber();

    swapNumbers(num1, num2);

    cout << "\nAfter swapping:" << endl;
    num1.displayNumber();
    num2.displayNumber();

    return 0;
}

