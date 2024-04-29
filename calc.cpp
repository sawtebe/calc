#include <iostream>
using std::cout;

int main() {
    double a, b;
    char op;
    std::cin >> a >> op >> b;

    switch (op) {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        if (b == 0) {
            cout << "Division by zero";
            return -1;
        }
        cout << a / b;
        break;
    default:
        cout << "Wrong operation";
        return -1;
    }
}