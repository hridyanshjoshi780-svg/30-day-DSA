#include <iostream>
using namespace std;
// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if(num < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }
    return 0;
}
