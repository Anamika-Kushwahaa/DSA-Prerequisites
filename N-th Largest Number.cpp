#include <iostream>
#include <vector>
#include <algorithm> // for sort()
using namespace std;

int findNthLargest(vector<int> arr, int n) {
    sort(arr.begin(), arr.end(), greater<int>()); // Sort in descending order
    return arr[n - 1]; // Return nth largest element
}

int main() {
    int size, n;
    cout << "Enter number of elements: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter N (to find Nth largest): ";
    cin >> n;

    if (n > 0 && n <= size)
        cout << n << "th largest element is: " << findNthLargest(arr, n);
    else
        cout << "Invalid value of N!";
    
    return 0;
}
