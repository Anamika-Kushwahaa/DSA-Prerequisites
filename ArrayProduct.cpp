//PRODUCT OF ARRAY ELEMENTS USING RECURSIVE FUNCTION
#include <iostream>
using namespace std;

int productOfArray(int arr[], int n) {
    // Base case
    if (n <= 0) {
        return 1;  // Multiplicative identity
    }
    // Recursive case
    return arr[n - 1] * productOfArray(arr, n - 1);
}

int main() {
    int n;
    cout << "Enter number of elements -> ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements -> ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Product of array elements: " << productOfArray(arr, n);

    return 0;
}


// OUTPUT:-
// Enter number of elements -> 5
// Enter array elements -> 1 2 3 4 5 
// Product of array elements: 120
