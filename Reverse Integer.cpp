#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10;   // get last digit
        rev = rev * 10 + digit; // add it to reversed number
        n /= 10;               // remove last digit
    }

    cout << "Reversed number: " << rev << endl;
    return 0;
}
