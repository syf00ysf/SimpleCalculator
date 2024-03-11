#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    double result;
    cout << "Enter first number, operator, second number: ";
    cin >> num1 >>op >> num2;
    switch (op)
    {
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
       if (num2 != 0){
        result = static_cast<double>(num1) / num2;
       }
       else {
        cout << "Error: Division by zero" << endl;
        return 1; // Exit program with error
       }
    default:
        cout << "Error: Invalid operator" << endl;
        return 1; // Exit program with error
    }
    cout << "Result: " << result << endl;

    return 0;
}
