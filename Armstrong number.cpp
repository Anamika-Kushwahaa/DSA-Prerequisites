//Armstrong number

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digits = 0;
    double sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    // Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    // Calculate sum of powers of digits
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if ((int)sum == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
