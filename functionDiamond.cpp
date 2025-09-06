#include <iostream>
using namespace std;

// Function to print hollow diamond pattern
void printHollowDiamond(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Print stars and spaces inside
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Print stars and spaces inside
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    printHollowDiamond(n);

    return 0;
}
