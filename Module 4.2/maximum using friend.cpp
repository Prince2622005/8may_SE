#include <iostream>
using namespace std;

class Numbers {
private:
    int num1, num2;

public:
    Numbers(int n1, int n2) : num1(n1), num2(n2) {}

    friend int findMax(Numbers& numbers);
};

int findMax(Numbers& numbers) {
    return (numbers.num1 > numbers.num2) ? numbers.num1 : numbers.num2;
}

int main() {
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    Numbers numbers(n1, n2);

    int maxNum = findMax(numbers);

    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}

