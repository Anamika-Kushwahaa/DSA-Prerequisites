#include <iostream>
using namespace std;

void printDescending(int n) {
    if (n == 0)  
        return;
    cout << n << " ";
    printDescending(n - 1);  // recursive call
}

int main() {
    int n;
    cout << "Enter a number -> ";
    cin >> n;
    
    printDescending(n);
    return 0;
}


OUTPUT:-
Enter a number -> 7
7 6 5 4 3 2 1
