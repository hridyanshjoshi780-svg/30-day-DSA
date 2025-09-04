#include<iostream>
using namespace std;
int main() {
    int n;
    bool prime = true; 
    cout << "enter a number: ";
    cin >> n;

    if (n <= 1) {
        prime = false; // 0 and 1 are not prime
    } else {
        for (int i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                prime = false;
                break; // No need to check further
            }
        }
    }

    if (prime) {
        cout << "It is a prime number" << endl;
    } else {
        cout << "It is a non-prime number" << endl;
    }
    return 0;
}
