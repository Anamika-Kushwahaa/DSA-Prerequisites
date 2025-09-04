#include<iostream>
using namespace std;

int DigitSum(int n){
    if(n==0){
        return n;
    }
    return (n%10+DigitSum(n/10));
}

int main(){
    int n;
    cout<<"Enter a number -> ";
    cin>>n;

    int sum=DigitSum(n);
    cout<<"SUM OF DIGITS -> "<<sum;

    return 0;
}


// OUTPUT:-
// Enter a number -> 23
// SUM OF DIGITS -> 5
