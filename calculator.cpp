#include <iostream>
#include <limits> // For input validation
using namespace std;
// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
// Function to validate and get numeric input
template<typename T>
T getValidInput(const string& prompt) {
    T value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.fail()) {
            cin.clear(); // Clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
            cout << "Invalid input. Please enter a valid number.\n";
        } else {
            break;
        }
    }
    return value;
}
int main() {
    char op;
    char type;
    // 1. Ask for the operation
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;
    if (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "Invalid operator selected.\n";
        return 1;
    }
    // 2. Ask if input will be int or float
    cout << "Will you enter decimal numbers or whole numbers? (f = float / i = int): ";
    cin >> type;
    if (type == 'f' || type == 'F') {
        // 3. Input as float
        float num1 = getValidInput<float>("Enter first number: ");
        float num2 = getValidInput<float>("Enter second number: ");
        if (op == '/' && num2 == 0) {
            cout << "Error: Division by zero!\n";
            return 1;
        }
        switch (op) {
            case '+': cout << "Result: " << add(num1, num2) << endl; break;
            case '-': cout << "Result: " << subtract(num1, num2) << endl; break;
            case '*': cout << "Result: " << multiply(num1, num2) << endl; break;
            case '/': cout << "Result: " << divide(num1, num2) << endl; break;
        }
    } else if (type == 'i' || type == 'I') {
        // 3. Input as int
        int num1 = getValidInput<int>("Enter first number: ");
        int num2 = getValidInput<int>("Enter second number: ");
        if (op == '/' && num2 == 0) {
            cout << "Error: Division by zero!\n";
            return 1;
        }
        switch (op) {
            case '+': cout << "Result: " << add(num1, num2) << endl; break;
            case '-': cout << "Result: " << subtract(num1, num2) << endl; break;
            case '*': cout << "Result: " << multiply(num1, num2) << endl; break;
            case '/': cout << "Result: " << divide(num1, num2) << endl; break;
        }
    } else {
        cout << "Invalid type selected. Use 'f' for float or 'i' for int.\n";
        return 1;
    }
    return 0;
}
// Function definitions
float add(float a, float b) {
    return a + b;
}
float subtract(float a, float b) {
    return a - b;
}
float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    return a / b;
}