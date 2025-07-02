#include <iostream>
#include <string>
using namespace std;

class Calculator {
private:
    double a, b;
public:
    Calculator(double x, double y) {
        a = x;
        b = y;
    }
    double operate(string operation) {
        if (operation == "add") {
            return a + b;
        } else if (operation == "subtract") {
            return a - b;
        } else if (operation == "multiply") {
            return a * b;
        } else if (operation == "divide") {
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        } else {
            cout << "Invalid operation!" << endl;
            return 0;
        }
    }
};

int main() {
    double num1, num2;
    string op;
    cout << "Enter first number (a): ";
    cin >> num1;
    cout << "Enter second number (b): ";
    cin >> num2;
    cout << "Enter operation (add, subtract, multiply, divide): ";
    cin >> op;
    Calculator calc(num1, num2);
    double result = calc.operate(op);
    cout << "Result: " << result << endl;
    return 0;
}
