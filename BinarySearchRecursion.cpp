#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int start, int end, int item) {
    if (start > end)
        return -1;   // element not found

    int mid = start + (end - start) / 2;

    if (arr[mid] == item)
        return mid;   // element found

    else if (item > arr[mid])
        return binarySearchRecursive(arr, mid + 1, end, item);  // search right half

    else
        return binarySearchRecursive(arr, start, mid - 1, item); // search left half
}

int main() {
    int arr[] = {2, 5, 8, 12, 20};
    int N = sizeof(arr) / sizeof(arr[0]);
    int item = 12;

    int result = binarySearchRecursive(arr, 0, N - 1, item);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
