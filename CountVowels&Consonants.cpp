#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        ch = tolower(ch);  // convert to lowercase for easy checking

        if (ch >= 'a' && ch <= 'z') {  // check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}

// OUTPUT:-
// Enter a string: How is DSA going?
// Vowels: 5
// Consonants: 8

