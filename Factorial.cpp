//FACTORIAL USING RECURSION
#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int num;
    cout<<"Enter a number ->";
    cin>>num;

    int fact=factorial(num);
    cout<<"Factorial -> "<<fact<<endl;

    return 0;

}


// OUTPUT:-
// Enter a number -> 11
// Factorial -> 39916800
