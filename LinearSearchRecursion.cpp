#include <iostream>
using namespace std;

int linearSearchRecursive(int arr[], int index, int N, int item) {
    if (index == N)          // Base case: reached end, not found
        return -1;

    if (arr[index] == item)  // Element found
        return index;

    return linearSearchRecursive(arr, index + 1, N, item);  // Recursive call
}

int main() {
    int arr[] = {5, 8, 12, 20};
    int N = sizeof(arr) / sizeof(arr[0]);
    int item = 12;

    int result = linearSearchRecursive(arr, 0, N, item);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
