//PRINT NUMBERS 1 TO N USING RECURSIVE FUNCTION

#include<iostream>
using namespace std;

void printing(int n){
    if(n == 0){
        return;   // base case
    }
    printing(n - 1);   
    cout << n << " ";  
}

int main(){
    int num;
    cout << "Enter a number -> ";
    cin >> num;

    cout << "Number sequence -> ";
    printing(num);

    return 0;
}


// OUTPUT:-
// Enter a number -> 7
// Number sequence -> 1 2 3 4 5 6 7
