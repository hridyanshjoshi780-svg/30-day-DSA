#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i; 
    }
    return -1; 
}

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n]; 
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> target;
    int result = linearSearch(arr, n, target);
    if (result != -1)
        cout << "Element found at index " << result << ".\n";
    else
        cout << "Element not found in the array.\n";
    return 0;
}