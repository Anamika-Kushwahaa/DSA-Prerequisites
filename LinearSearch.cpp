#include <iostream>
using namespace std;
int linearSearch(int arr[], int N, int item) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == item)   
            return i;         
    }
    return -1;  
}
int main() {
    int arr[] = {5, 8, 12, 20};
    int N = sizeof(arr) / sizeof(arr[0]);
    int item = 12;
   
   int result = linearSearch(arr, N, item);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
