#include <iostream>
#include <cctype>   // for ispunct()
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (!ispunct(ch)) {  // keep only non-punctuation characters
            result += ch;
        }
    }

    cout << "After removing punctuation: " << result;
    return 0;
}

// OUTPUT:-
// Enter a string: Woww !! What a beautiful day.
// After removing punctuation: Woww  What a beautiful day
